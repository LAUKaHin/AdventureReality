#include "client.h"

#include <math.h>

Client::Client()
{
	connect( this, SIGNAL(readyRead()), this, SLOT(received()) );
}

void Client::connectServ( QString str_ip, int i_port )
{
	//this->abort();
	this->connectToHost( str_ip, i_port );
	printf( "Connecting to %s:%d\n", qPrintable(str_ip), i_port );
}

void Client::sendRawByte( QByteArray ba_payload ) {
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
	this->write( ba_send );
}

void Client::received(){
	QByteArray block = this->readAll();
	if(block.size() < 17) {
		ui_status = 0xA;
		return;
	}
	if(!b_rx){
		ui_len = (uchar)block[0]*0x1000000 + (uchar)block[1]*0x10000 + (uchar)block[2]*0x100 + (uchar)block[3];
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
		emit rxReady();
	}
	else if((uint32_t)ba_load.size() > ui_len) {
		ui_status = 0xB;
	}
}
