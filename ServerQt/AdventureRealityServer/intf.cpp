#include <qimage.h>
#include <qfile.h>
#include <qlabel.h>
#include <qboxlayout.h>

#include "intf.h"

#include <iostream>
#include <QtDebug>

Intf::Intf() {
    DataInterface imageModifier;
    //QImage cpp = QImage::fromData(imageModifier.PickImage("cpp"));
    //QImage cs = QImage::fromData(imageModifier.PickImage("cSharp"));
    QByteArray mixer = imageModifier.PickImage("cpp") + "<AdventureReality>" + imageModifier.PickImage("cSharp") + "<AdventureReality>" + imageModifier.PickImage("qt") + "<AdventureReality>" + imageModifier.PickImage("unity");
    //qDebug() << mixer.length();
    QList<QImage> imager = imageModifier.ImageDecoder(mixer);

    QLabel *p_k = new QLabel;
    QLabel *p_l = new QLabel;
    //p_k->setPixmap(QPixmap::fromImage(cpp));
    p_k->setPixmap(QPixmap::fromImage(imager.at(0)));
	QVBoxLayout *p_top = new QVBoxLayout;
    p_top->addWidget(p_k);
    p_l->setPixmap(QPixmap::fromImage(imager.at(1)));
    p_top->addWidget(p_l);
    this->setLayout(p_top);

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
    QString command;
    int splitCounter = 0;
    for(int i = splitCounter; p_usr->ba_load.at(i) != ','; i++)
    {
        command.append(p_usr->ba_load.at(i));
        splitCounter = i;
    }
    splitCounter+= 2;
    qDebug() << command << "charReader reads:" << splitCounter;

    QString message;
    for(int i = 0; i < p_usr->ba_load.length(); i++)
    {
        message.append(p_usr->ba_load.at(i));
    }
    qDebug() << message;
    DataInterface interface;
    if(command  == "Register")
    {
        DataInterface::UserData newAccount;
        for (int i = splitCounter; p_usr->ba_load.at(i) != ','; i++)
        {
            newAccount.email.append(p_usr->ba_load.at(i));
            splitCounter = i;
        }
        splitCounter++;
        for(int i = splitCounter; p_usr->ba_load.at(i) != ','; i++)
        {
            newAccount.password.append(p_usr->ba_load.at(i));
            splitCounter = i;
        }
        splitCounter++;
        for(int i = splitCounter; p_usr->ba_load.at(i) != ','; i++)
        {
            newAccount.tokenOrID.append(p_usr->ba_load.at(i));
            splitCounter = i;
        }
        QList<DataInterface::UserInfo> userList = interface.UserInfoReader();
        for(int i = 0; i < userList.length(); ++i)
        {
            if(newAccount.tokenOrID == userList.at(i).tokenOrID)
            {
                //return error message: TAR(TokenOrIDAlreadyRegisted)
            }
            else if(newAccount.email == userList.at(i).email)
            {
                //return error message: EAE(eMailAlreadyExist)
            }
        }
        DataInitialization accountBuilder;
        accountBuilder.CreateUser(newAccount);
        //return message(Registeration successfully)
    }
    else if(command == "Login")
    {
        DataInterface::UserData loginAccount;
        for (int i = splitCounter; p_usr->ba_load.at(i) != ','; i++)
        {
            loginAccount.email.append(p_usr->ba_load.at(i));
            splitCounter = i;
        }
        splitCounter++;
        for(int i = splitCounter; p_usr->ba_load.at(i) != ','; i++)
        {
            loginAccount.password.append(p_usr->ba_load.at(i));
            splitCounter = i;
        }
        splitCounter++;
        for(int i = splitCounter; p_usr->ba_load.at(i) != ','; i++)
        {
            loginAccount.tokenOrID.append(p_usr->ba_load.at(i));
            splitCounter = i;
        }
        QList<DataInterface::UserInfo> userList = interface.UserInfoReader();
        for(int i = 0; i < userList.length(); ++i)
        {
            if(loginAccount.email == userList.at(i).email)
            {
                DataInterface::UserData checkData = interface.UserDataReader(userList.at(i).tokenOrID);
                if(loginAccount.password != checkData.password)
                {
                    //return message(wrong password)
                }
                else
                {

                }
            }
        }
    }
    else if(command == "ReadUserData")//just for demo
    {
        DataInterface::UserData requestAccount;
        for(int i = splitCounter; i < p_usr->ba_load.at(i); i++)
        {
            requestAccount.tokenOrID.append(p_usr->ba_load.at(i));
            splitCounter = i;
        }
        requestAccount = interface.UserDataReader(requestAccount.tokenOrID);
        QString serverTime = QDateTime::currentDateTime().toString("yyyyMMddHHmm");
        QString couponCoinString = QString::number(requestAccount.couponCoin);
        QString command = "ReadUserData";
        QByteArray data = serverTime.toUtf8() + command.toUtf8() + ',' +  requestAccount.email.toUtf8() + ',' + requestAccount.password.toUtf8() + ',' + requestAccount.tokenOrID.toUtf8() + ',' + couponCoinString.toUtf8();
        QString DataAsString = QTextCodec::codecForMib(106)->toUnicode(data);
        p_server->sendRawByte(data, p_usr);
        p_server->disconnect();

    }
    else if(command == "WriteUserData")//WriteUserData
    {
        DataInterface::UserData requestAccount;
        //DataInterface::UserData requestAccount = interface.WriteUserDataBAD(p_usr->ba_load, splitCounter);
        qDebug() << "true";

        for (int i = splitCounter; p_usr->ba_load.at(i) != ','; i++)
        {
            requestAccount.email.append(p_usr->ba_load.at(i));
            splitCounter = i;
        }
        qDebug() << "email: "<< requestAccount.email<<" readings:" <<splitCounter;
        splitCounter+= 2;
        for(int i = splitCounter; p_usr->ba_load.at(i) != ','; i++)
        {
            requestAccount.password.append(p_usr->ba_load.at(i));
            splitCounter = i;
            qDebug() << p_usr->ba_load.at(i);
        }
        qDebug() << "password: "<< requestAccount.password<<" readings:" <<splitCounter;
        splitCounter+=2;
        for(int i = splitCounter; p_usr->ba_load.at(i) != ','; i++)
        {
            requestAccount.tokenOrID.append(p_usr->ba_load.at(i));
            splitCounter = i;
        }
        qDebug() << "tokenOrID: "<< requestAccount.tokenOrID<<" readings:" <<splitCounter;
        splitCounter+=2;
        QString byteToString = "";
        for(int i = splitCounter; p_usr->ba_load.at(i) != '\0'; i++)
        {

            byteToString.append(p_usr->ba_load.at(i));
            splitCounter = i;
        }
        requestAccount.couponCoin = byteToString.toInt();
        qDebug() << "couponCoin: "<< requestAccount.couponCoin<<" readings:" <<splitCounter;
        //requestAccount.couponCoin = byteToString.toInt();
        qDebug() << "couponCoin reads:" <<splitCounter;

        qDebug() << requestAccount.time << " " << requestAccount.email << " " << requestAccount.password << " " << requestAccount.tokenOrID << " " << requestAccount.couponCoin;
        DataInitialization create;
        create.CreateUser(requestAccount);
    }
    else if(command == "ReadUserCoupon")
    {

    }
    else if(command == "WriteUserCoupon")
    {

    }
    else if(command == "ReadShopData")
    {

    }
    else if(command == "WriteShopData")
    {

    }
    else if(command == "ReadShopCoupon")
    {

    }
    else if(command == "WriteShopCoupon")
    {

    }
    else if(command == "ReadUserList")
    {

    }
    else if(command == "WriteUserList")
    {

    }
    else if(command == "ReadShopList")
    {

    }
    else if(command == "WriteShopList")
    {

    }
    else
    {
        qDebug() << "wrong command:" << command;
    }
	char cmd = p_usr->ba_load.at(0);
	if(cmd == 'B') {
		QByteArray ba_rtn;
		ba_rtn.append('J');
		
        QFile file("C:\\Users\\LAU Ka Hin\\OneDrive - Vocational Training Council - Student\\GameAR\\AdventureReality\\TutorialExample\\QtXUnity\\tcp_srv_tlv\\image_resource\\image_test.png");
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
		
        QFile file("C:\\Users\\LAU Ka Hin\\OneDrive - Vocational Training Council - Student\\GameAR\\AdventureReality\\TutorialExample\\QtXUnity\\tcp_srv_tlv\\image_resource\\1000x-1.jpg");
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
