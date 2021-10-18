#include <qimage.h>
#include <qfile.h>
#include <qlabel.h>
#include <qboxlayout.h>

#include "intf.h"

Intf::Intf() {
	/*QFile file("C:\\Users\\user\\Desktop\\tcp_srv_tlv\\image_resource\\image_test.png");
	file.open(QFile::ReadOnly);
	QByteArray buf = file.readAll();
	file.close();
	QImage img = QImage::fromData(buf);
	QLabel *p_l = new QLabel;
	p_l->setPixmap(QPixmap::fromImage(img));
	QVBoxLayout *p_top = new QVBoxLayout;
	p_top->addWidget(p_l);
	this->setLayout(p_top);*/
	
	
	p_server = new Server(9884);
	connect(p_server, SIGNAL(rxReady(User *)),\
				this, SLOT(serviceProcess(User *)));
}

void Intf::serviceProcess(User *p_usr) {
	if(p_usr->ba_load.length() == 0) {
		printf("Why no content in usr\n");
		return;
	}
	
	//CMD='J' (Send JPEG)
	char cmd = p_usr->ba_load.at(0);
	if(cmd == 'B') {
		QByteArray ba_rtn;
		ba_rtn.append('J');
		
		QFile file("C:\\Users\\LAU Ka Hin\\VTC\\YCKB\\FinalYearProject\\ServerQT\\QtXUnity\\tcp_srv_tlv\\image_resource\\image_test.png");
		file.open(QFile::ReadOnly);
		QByteArray buf = file.readAll();
		file.close();

		ba_rtn.append(buf);
		
		printf("ba_rtn len:%d\n", ba_rtn.length());
		p_server->sendRawByte(ba_rtn, p_usr);
	}
	else if(cmd == 'C') {
		QByteArray ba_rtn;
		ba_rtn.append('J');
		
		QFile file("C:\\Users\\LAU Ka Hin\\VTC\\YCKB\\FinalYearProject\\ServerQT\\QtXUnity\\tcp_srv_tlv\\image_resource\\1000x-1.jpg");
		file.open(QFile::ReadOnly);
		QByteArray buf = file.readAll();
		file.close();

		ba_rtn.append(buf);
		
		printf("ba_rtn len:%d\n", ba_rtn.length());
		p_server->sendRawByte(ba_rtn, p_usr);
	}
	else if(cmd == 'D') {
		QByteArray ba_data = p_usr->ba_load;
		ba_data = ba_data.mid(1);
		QString str_data = QString(ba_data);
		printf("%s\n", qPrintable(str_data));
		QStringList str_data_split = str_data.split(",");
		for(int i=0; i<str_data_split.size(); i++) {
			printf("%d, %s\n", i, qPrintable(str_data_split.at(i)));
			printf("%d, %f\n", str_data_split.at(i).toInt(), str_data_split.at(i).toFloat());
		}
		
		QByteArray ba_rtn;
		ba_rtn.append('A');
				
		printf("ba_rtn len:%d\n", ba_rtn.length());
		p_server->sendRawByte(ba_rtn, p_usr);
	}
	else if(cmd == 'T') {
		QByteArray ba_rtn;
		ba_rtn.append('A');
		ba_rtn.append('B');
		ba_rtn.append('C');
		p_server->sendRawByte(ba_rtn, p_usr);
	}
	else {}
}