#include <qwidget.h>
#include <qlineedit.h>
#include <qlabel.h>

#include "server.h"
#include "database.h"

#include <iostream>
#include <QtDebug>

#include <QTextCodec>

class Intf : public QWidget
{
	Q_OBJECT
	
	public:
		Intf();
	
	public slots:
		void serviceProcess(User *);
	
	public:
		Server					*p_server;

};
