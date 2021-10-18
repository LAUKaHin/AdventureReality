#include <qapplication.h>
#include <stdio.h>

#include "intf.h"

int main( int argc, char *argv[] )
{
	QApplication app( argc, argv );
	Intf w_main;
	w_main.show();
	return app.exec();
}