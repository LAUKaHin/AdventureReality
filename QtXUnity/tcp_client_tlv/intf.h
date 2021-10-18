#include <stdio.h>

#include <qwidget.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qimage.h>
#include <qboxlayout.h>

#include "client.h"

class Intf : public QWidget {
	Q_OBJECT
	public:
		Intf();
	public slots:
		void serviceClient();	
		void sendImgCMD();
		void sendAnotherImgCMD();
		void sendDataCMD();
		
	public:
		Client					*p_tcp;
		QPushButton				*p_giveImgB,\
								*p_giveAnotherB,\
								*p_sendDataB;
		QLabel					*p_imgL=NULL;
		QVBoxLayout				*p_top;
};
