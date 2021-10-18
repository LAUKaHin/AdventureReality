#include <qapplication.h>
#include "intf.h"
int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	Intf *p_intf = new Intf();
	p_intf->show();
	app.exec();
	return 0;
}