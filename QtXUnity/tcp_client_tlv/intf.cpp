#include "intf.h"
#include <qfile.h>

Intf::Intf() {
	p_tcp = new Client();
	p_tcp->connectServ("192.168.1.112", 12345);
	connect(p_tcp, SIGNAL(rxReady()),\
						this, SLOT(serviceClient()));
	p_giveImgB = new QPushButton("ImgRqs1");
	p_giveAnotherB = new QPushButton("ImgRqs2");
	p_sendDataB = new QPushButton("DataRqs");
	connect(p_giveImgB, SIGNAL(clicked()), this, SLOT(sendImgCMD()));
	connect(p_giveAnotherB, SIGNAL(clicked()), this, SLOT(sendAnotherImgCMD()));
	connect(p_sendDataB, SIGNAL(clicked()), this, SLOT(sendDataCMD()));
	p_top = new QVBoxLayout;
	p_top->addWidget(p_giveImgB);
	p_top->addWidget(p_giveAnotherB);
	p_top->addWidget(p_sendDataB);
	this->setLayout(p_top);
}

void Intf::serviceClient() {
	printf("received [%u][%s]\n", p_tcp->ui_len, qPrintable(p_tcp->dt_pack.toString()));
	//printf("The load:%s\n", qPrintable(QString(p_tcp->ba_load)));
	char cmd = p_tcp->ba_load.at(0);
	if(cmd == 'J') {
		QByteArray ba_img = p_tcp->ba_load;
		ba_img = ba_img.mid(1);
		if(p_imgL != NULL) {
			delete p_imgL;
			p_imgL = NULL;
		}
		
		QImage img = QImage::fromData(ba_img);
		printf("img from byte:%d vs %d\n", img.byteCount(), ba_img.length());
		p_imgL = new QLabel();
		p_imgL->setPixmap(QPixmap::fromImage(img));
		p_top->addWidget(p_imgL);
	}
	else if(cmd == 'A') {
		printf("Data send success\n");
	}
	else {}
}

void Intf::sendImgCMD() {
	//CMD[010101110001]
	//CMD(TAG1,TAG2,TAG3)
	//e.g. CMD='A' (Login)  Name,Email,Password.....
	//CMD='B' (Send image),Image
	QByteArray ba_send;
	ba_send.append('B');
	p_tcp->sendRawByte(ba_send);
	printf("ba_send:%d\n", ba_send.length());
}

void Intf::sendAnotherImgCMD() {
	//CMD[010101110001]
	//CMD(TAG1,TAG2,TAG3)
	//e.g. CMD='A' (Login)  Name,Email,Password.....
	//CMD='B' (Send image),Image
	QByteArray ba_send;
	ba_send.append('C');
	p_tcp->sendRawByte(ba_send);
	printf("ba_send:%d\n", ba_send.length());
}

void Intf::sendDataCMD() {
	//CMD[010101110001]
	//CMD(TAG1,TAG2,TAG3)
	//e.g. CMD='A' (Login)  Name,Email,Password.....
	//CMD='B' (Send image),Image
	QByteArray ba_send;
	ba_send.append('D');
	int i_temp=30;
	float f_humidity = 95.5;
	QString str_data = tr("%1,%2").arg(i_temp).arg(f_humidity);
	ba_send.append(str_data.toLatin1());
	p_tcp->sendRawByte(ba_send);
	printf("ba_send:%d\n", ba_send.length());
}