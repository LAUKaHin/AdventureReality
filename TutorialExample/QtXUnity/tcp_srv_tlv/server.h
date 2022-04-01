#include <QTcpServer>
#include <QTcpSocket>
#include <qdatetime.h>

class User : public QObject
{
	Q_OBJECT
	
	public:
		User();
		bool parseRawByte(QByteArray);
	
	public:
		QTcpSocket												*p_socket;
		QByteArray												ba_load;
		QDateTime												dt_pack;
		uint32_t												ui_len;
		uint32_t												ui_status;
		bool 													b_rx=false;
};

class Server : public QTcpServer
{
	Q_OBJECT

	public:
		Server( quint16 );
		void sendRawByte( QByteArray, User* );
	
	public slots:
		void connectNew();
		void disconnect();
		void received();

	signals:
		void rxReady(User *);

	public:
		int														i_port;
		QList<User *>											p_user;
};
