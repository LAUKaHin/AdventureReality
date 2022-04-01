#include <QTcpSocket>
#include <qdatetime.h>

class Client : public QTcpSocket
{
	Q_OBJECT
	
	public:
		Client();
	
	public slots:
		void connectServ( QString, int );
		void sendRawByte( QByteArray );
		void received();

	signals:
		void rxReady();

	public:
		QByteArray							ba_load;
		QDateTime							dt_pack;
		uint32_t							ui_len;
		uint32_t							ui_status;
		bool 								b_rx=false;
};
