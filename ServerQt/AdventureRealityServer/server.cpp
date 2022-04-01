#include "server.h"
#include <math.h>

User::User() {}

bool User::parseRawByte( QByteArray block) {
	//printf("block size:%d\n", block.size());
	if(block.size() < 17) {
		ui_status = 0xA;
		return false;
	}
	if(!b_rx){
		ui_len = block[0]*0x1000000 + block[1]*0x10000 + block[2]*0x100 + block[3];
		printf("ui_len:%u\n", ui_len);
		QByteArray ba_dt = block.mid(4, 12);
		QString str_dt = QString(ba_dt);
		dt_pack = QDateTime::fromString(str_dt, "yyyyMMddhhmm");
		printf("pack dt:%s\n", qPrintable(str_dt));
		
		ba_load = block.mid(16);
		ui_len = ui_len - 16;
		b_rx = true;
	}
	else {
		ba_load.append(block);
	}
	
	if((uint32_t)ba_load.size() == ui_len) {
		b_rx = false;
		return true;
	}
	else if((uint32_t)ba_load.size() > ui_len) {
		ui_status = 0xB;
	}
	
	return false;
}

Server::Server( quint16 i_port_t )
{
	i_port = i_port_t;
	QHostAddress *p_addr;
	
	if( !this->listen( p_addr->Any, i_port ) )
	{
		printf( "Unable to listen tcp Addr or Port\n" );
		close();
		return;
	}
	else
	{
		printf( "Listening to port:%d\n", i_port );
		connect( this, SIGNAL(newConnection()), this, SLOT(connectNew()) );
	}
}

void Server::sendRawByte( QByteArray ba_payload, User *_usr ) {
	uint32_t i_length = ba_payload.size()+4+12;
	QByteArray ba_send;	
	uint32_t i_low = i_length & 0xFF;
	uint32_t i_mid = (i_length &0xFF00)/((uint32_t) pow(2, (float)8));
	uint32_t i_high = (i_length &0xFF0000)/((uint32_t) pow(2, (float)16));
	uint32_t i_uhigh = (i_length &0xFF000000)/((uint32_t) pow(2, (float)24));
	ba_send.append( (uchar)i_uhigh );
	ba_send.append( (uchar)i_high );
	ba_send.append( (uchar)i_mid );
	ba_send.append( (uchar)i_low );
	
	QDateTime dt_now = QDateTime::currentDateTime();
	QString str_dt_now = dt_now.toString("yyyyMMddhhmm");
	
	ba_send.append(str_dt_now.toLatin1());
	
	ba_send.append(ba_payload);
	
	bool b_send = false;
	for(int i=0; i<p_user.size(); i++) {
		if(p_user.at(i) == _usr) {
			p_user.at(i)->p_socket->write(ba_send);
			b_send = true;
			break;
		}
	}
	
	if(!b_send)
		printf("No specific user for sending data\n");
}

void Server::connectNew() {
	User *p_newUser = new User();
	p_newUser->p_socket = this->nextPendingConnection();
	p_user.append(p_newUser);
	connect( p_user.last()->p_socket, SIGNAL(readyRead()), this, SLOT(received()) );
	connect( p_user.last()->p_socket, SIGNAL(disconnected()), this, SLOT(disconnect()) );
	printf( "TCP connection established. (%d on-line)\n", p_user.size() );
}

void Server::disconnect()
{
	for( int i=0; i<p_user.size(); i++ ) {
		if( p_user.at(i)->p_socket->state() == QAbstractSocket::UnconnectedState ) {
			p_user.at(i)->p_socket->deleteLater();
			delete p_user.at(i);
			p_user[i] = NULL;
			p_user.removeAt(i);
			printf( "%d Disconnect. No. of on-line user:%d\n", i, p_user.size() );
			break;
		}
	}
}

void Server::received() {
	for( int i=0; i<p_user.size(); i++ ) {
		if( p_user.at(i)->p_socket->bytesAvailable() > 0 ) {
			if(p_user.at(i)->parseRawByte(p_user.at(i)->p_socket->readAll()) == true) {
				emit rxReady(p_user.at(i));
				break;
			}
		}
	}
}

