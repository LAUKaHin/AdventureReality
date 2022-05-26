#include "database.h"
#include "ui_database.h"

#include <direct.h>
#include <qfile.h>
#include <qtextstream.h>

#include <qdatetime.h>

Database::Database(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Database)
{

    DataInterface csvEditor;
    csvEditor.CouponAmountReader("");
    /*
    DataInitialization initialization;
    QDateTime timer;
    initialization.DatabaseInitialization();
    csvEditor.testPlayer.time = timer.currentDateTime();
    csvEditor.testPlayer.email = "190288814@stu.vtc.edu.hk";
    csvEditor.testPlayer.password = "null";
    csvEditor.testPlayer.tokenOrID = "1701";
    csvEditor.testPlayer.couponCoin = 1000;
    initialization.CreateUser(csvEditor.testPlayer);
    DataInterface::UserData nextPlayer = csvEditor.UserDataReader(csvEditor.testPlayer.tokenOrID);
    QString text = nextPlayer.time.toString("yyyy:MM:dd:HH:mm:ss") + " " + nextPlayer.email + " " + nextPlayer.password + " " + nextPlayer.tokenOrID + " " + QString::number(nextPlayer.couponCoin);
    string debugTool = text.toStdString();
    qDebug() << nextPlayer.time << " " << nextPlayer.email << " " << nextPlayer.password << " " << nextPlayer.tokenOrID << " " << nextPlayer.couponCoin;
    //cout << debugTool;
    */
    qDebug() << csvEditor.NumberFilter("KHLAU20010730");

    //ui->setupUi(this);
}

Database::~Database()
{
    delete ui;
}

void DataInitialization::DatabaseInitialization()
{
    QFile mainPath(rp + "//ARS");
    if(!mainPath.exists())
    {
        DataInterface csvEditor;
        DataInitialization createDir;
        createDir.CreateDirectory(createDir.directoryName, createDir.loop);
        csvEditor.QtCSV_Writer(createDir.directoryName[1], "", csvEditor.fileName[4]);
        csvEditor.QtCSV_Writer(createDir.directoryName[2], "", csvEditor.fileName[5]);
    }
}

void DataInitialization::CreateDirectory(QList<QString> directoryName, QList<int> loopTime)
{
    QString rpString;
    int subDir = 0;
    for (int i = 0; i <= loopTime[0]; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < loopTime[i]; j++)
            {
                rpString = rp + "//" + directoryName[j];
                mkdir(QStringCharConvertor(rpString));
                subDir = j;
            }
        }
        else
        {
            for (int k = 0; k < loopTime[i]; k++)
            {
                subDir++;
                rpString = rp + "//" + directoryName[i - 1] + "//" + directoryName[subDir];
                mkdir(QStringCharConvertor(rpString));
            }
        }
    }
}
void DataInitialization::CreateUser(DataInterface::UserData data)
{
    DataInterface csvEditor;
    mkdir(QStringCharConvertor(rp + "//" + "ARS" + "//" + directoryName.at(1) + "//" + data.tokenOrID));
    csvEditor.DataWriter(data);
}

const char* DataInitialization::QStringCharConvertor(QString qsInput)
{
    QByteArray ba = qsInput.toLocal8Bit();
    char* c_str2 = ba.data();
    return c_str2;
}

QStringList DataInterface::QtCSV_Reader(QString category, QString client, QString filename)
{
    if(client != "")
    {
        client += "//";
    }
    QFile inFile(rp +"//" + "ARS" + "//" + category + "//" + client + filename + ".csv");
    QStringList lines;/*行數據*/
    if (inFile.open(QIODevice::ReadOnly))
    {
        QTextStream stream_text(&inFile);
        while (!stream_text.atEnd())
        {
            lines.push_back(stream_text.readLine());
        }
        for (int j = 0; j < lines.size(); j++)
        {
            QString line = lines.at(j);
            QStringList split = line.split(",");/*列數據*/
            for (int col = 0; col < split.size(); col++)
            {
                qDebug() << split.at(col);
            }
        }
        inFile.close();

    }
    return lines;
}

void DataInterface::QtCSV_Writer(QString category, QString client, QString filename)
{
    if(client != "")
    {
        client += "//";
    }
    QFile outFile(rp +"//" + "ARS" + "//" + category + "//" + client + filename + ".csv");
    QStringList lines;
    lines << "0,1,2\n" << "3,4,5\n" << "6,7,8\n";
    /*如果以ReadWrite方式打開，不會把所有數據清除，如果文件原來的長度爲100字節，寫操作寫入了30字節，那麼還剩餘70字節，並且這70字節和文件打開之前保持一直*/
    if (outFile.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        for (int i = 0; i < lines.size(); i++)
        {
            outFile.write(lines[i].toStdString().c_str());/*寫入每一行數據到文件*/
        }
        outFile.close();
    }
}

DataInterface::UserData DataInterface::UserDataReader(QString client)
{
    if(client != "")
    {
        client += "//";
    }
    QFile inFile(rp +"//" + "ARS" + "//" + "Users" + "//" + client + fileName.at(0) + ".csv");
    QStringList lines;/*行數據*/
    DataInterface::UserData userData;
    if (inFile.open(QIODevice::ReadOnly))
    {
        QTextStream stream_text(&inFile);
        while (!stream_text.atEnd())
        {
            lines.push_back(stream_text.readLine());
        }
        QString line = lines.at(lines.size() - 1);
        QStringList split = line.split(",");/*列數據*/
        userData.time = QDateTime::fromString(split.at(0), dtFormat);
        userData.email = split.at(1);
        userData.password = split.at(2);
        userData.tokenOrID = split.at(3);
        userData.couponCoin = split.at(4).toInt();
        inFile.close();
    }
    return userData;
}
/*
QList<DataInterface::UserCoupon> DataInterface::UserCouponReader(QString client)
{
    if(client != "")
    {
        client += "//";
    }
    QFile inFile(rp +"//" + "ARS" + "//" + "Users" + "//" + client + fileName.at(1) + ".csv");
    QStringList lines;
     QList<DataInterface::UserCoupon> userCoupon;
     DataInitialization dirPicker;
    if (inFile.open(QIODevice::ReadOnly))
    {
        QTextStream stream_text(&inFile);
        while (!stream_text.atEnd())
        {
            lines.push_back(stream_text.readLine());
        }
        for (int j = 0; j < lines.size(); j++)
        {
            QString line = lines.at(j);
            QStringList split = line.split(",");
            userCoupon[j].couponID = split.at(0);
            userCoupon[j].getDate = QDateTime::fromString(split.at(1), dtFormat);
            userCoupon[j].usedDate = QDateTime::fromString(split.at(2), dtFormat);
            userCoupon[j].qrImageLocation = split.at(3);
            userCoupon[j].qrCode = QImage::fromData(PickImage(dirPicker.directoryName[1], client, userCoupon[j].qrImageLocation));
        }
        inFile.close();
    }
    return userCoupon;
}
*/
QList<QList<DataInterface::CouponAmount>> DataInterface::CouponAmountReader(QString client)
{
    if(client != ""){client += "//";}
    QFile inFile(rp +"//" + "ARS" + "//" + "Users" + "//" + client + "CouponAmount" + ".csv");
    QStringList lines;/*行數據*/
    QList<CouponAmount> couponList;
    QList<QList<CouponAmount>> sixTypesOfCouponList;
    if (inFile.open(QIODevice::ReadOnly))
    {
        QTextStream stream_text(&inFile);
        while (!stream_text.atEnd())
        {
            lines.push_back(stream_text.readLine());
        }
        qDebug() << "file readed";
        for (int j = 0; j < lines.size(); j++)
        {
            QString line = lines.at(j);
            QStringList split = line.split(",");/*列數據*/
            CouponAmount coupon;
            coupon.shopType = split.at(0).toUInt();
            coupon.couponID = split.at(1);
            coupon.amount = split.at(2).toUInt();
            couponList.append(coupon);
        }
        inFile.close();
        sort(begin(couponList), end(couponList), CouponAmountCouponId);
        sort(begin(couponList), end(couponList), CouponAmountShopType);

        uint loopflag = 0;
        for (int i = 0; i < 6; i++)
        {
            QList<CouponAmount> typeStorge;
            for(uint j = loopflag; couponList[uint(j)].shopType == uint(i); j++)
            {

                typeStorge.append(couponList[j]);
                loopflag = j+1;
                if(j == couponList.length() -1)
                {
                    break;
                }
            }
            sixTypesOfCouponList.append(typeStorge);
            qDebug() << QString::number(sixTypesOfCouponList.length());
        }
        qDebug() << "Loop Done";
    }
    return sixTypesOfCouponList;
}
DataInterface::ShopData DataInterface::ShopDataReader(QString client)
{
    if(client != "")
    {
        client += "//";
    }
    QFile inFile(rp +"//" + "ARS" + "//" + "Shops" + "//" + client + fileName.at(2) + ".csv");
    QStringList lines;/*行數據*/
    DataInterface::ShopData shopData;
    if (inFile.open(QIODevice::ReadOnly))
    {
        QTextStream stream_text(&inFile);
        while (!stream_text.atEnd())
        {
            lines.push_back(stream_text.readLine());
        }
        QString line = lines.at(lines.size() - 1);
        QStringList split = line.split(",");/*列數據*/
        shopData.date = QDate::fromString(split.at(4), dtFormat);
        shopData.shopName = split.at(0);
        shopData.shopType = split.at(1).toUInt();
        shopData.District = split.at(2);
        shopData.location = split.at(3);
        shopData.shortName = split.at(4);
        shopData.discription = split.at(5);
        inFile.close();
    }
}
QList<QList<QList<DataInterface::ShopCoupon>>> DataInterface::ShopCouponReader(QString client)
{
    if(client != "")
    {
        client += "//";
    }
    QFile inFile(rp +"//" + "ARS" + "//" + "Shops" + "//" + client + fileName.at(3) + ".csv");
    QDirIterator it(rp +"//" + "ARS" + "//" + "Shops", QDirIterator::Subdirectories);
    while (it.hasNext())
    {
        QString dir = it.next();
        qDebug() << dir;
    }
    QStringList lines;/*行數據*/

    QList<ShopCoupon> couponList;
    QList<QList<ShopCoupon>> sixTypeOfCouponList;
    QList<QList<QList<ShopCoupon>>> ShopCouponList;

    if (inFile.open(QIODevice::ReadOnly))
    {
        QTextStream stream_text(&inFile);
        while (!stream_text.atEnd())
        {
            lines.push_back(stream_text.readLine());
        }
        qDebug() << "file readed";
        for (int j = 0; j < lines.size(); j++)
        {
            QString line = lines.at(j);
            QStringList split = line.split(",");/*列數據*/
            ShopCoupon coupon;
            coupon.couponID = split.at(0);
            coupon.shopType = split.at(1).toUInt();
            coupon.title = split.at(2);
            coupon.content = split.at(3);
            coupon.cost = split.at(4).toUInt();
            coupon.imageLocation = split.at(5);
            coupon.holder = split.at(6);
            coupon.enabledDate = QDateTime::fromString(split.at(7), dtFormat);
            coupon.disabledDate = QDateTime::fromString(split.at(8), dtFormat);
            coupon.qrImageLocation = split.at(9);
            couponList.append(coupon);
        }
        inFile.close();
        sort(begin(couponList), end(couponList), ShopCouponCouponId);
        sort(begin(couponList), end(couponList), ShopCouponShopType);
        for (int i = 0; i < couponList.length(); i++)
        {
            qDebug() << couponList[i].couponID + " " + QString::number(couponList[i].shopType) + " " + couponList[i].title + " " +
                        couponList[i].content + " " + QString::number(couponList[i].cost) + " " + couponList[i].holder + " " +
                        couponList[i].enabledDate.toString() + " " + couponList[i].disabledDate.toString() ;
        }

        qDebug() << "Begin to loop";
        uint loopflag = 0;
        for (int i = 0; i < 6; i++)
        {
            QList<ShopCoupon> typeStorge;
            for(uint j = loopflag; couponList[uint(j)].shopType == uint(i); j++)
            {

                typeStorge.append(couponList[j]);
                loopflag = j+1;
                if(j == couponList.length() -1)
                {
                    break;
                }
            }
            sixTypeOfCouponList.append(typeStorge);
            qDebug() << QString::number(sixTypeOfCouponList.length());
        }
        qDebug() << "Loop Done";
        for(int i = 0; i < sixTypeOfCouponList.length(); i++)
        {
            qDebug() << "Type" + QString::number(i);
            for (int j = 0; j < sixTypeOfCouponList[i].length(); j++)
            {
                qDebug() << "List i: "+ QString::number(i) + "List j: " + QString::number(j);
                qDebug() << sixTypeOfCouponList[i][j].couponID + " " + QString::number(sixTypeOfCouponList[i][j].shopType) + " " + sixTypeOfCouponList[i][j].title + " " +
                            sixTypeOfCouponList[i][j].content + " " + QString::number(sixTypeOfCouponList[i][j].cost) + " " + sixTypeOfCouponList[i][j].holder + " " +
                            sixTypeOfCouponList[i][j].enabledDate.toString() + " " + sixTypeOfCouponList[i][j].disabledDate.toString() ;
            }
            qDebug() << "\n";
        }
    }
    return ShopCouponList;
}
QList<DataInterface::UserInfo> DataInterface::UserInfoReader()
{
    QList<DataInterface::UserInfo> userList;
    QFile inFile(rp +"//" + "ARS" + "//" + "Users" + "//" + fileName.at(4) + ".csv");
    QStringList lines;/*行數據*/
    if (inFile.open(QIODevice::ReadOnly))
    {
        QTextStream stream_text(&inFile);
        while (!stream_text.atEnd())
        {
            lines.push_back(stream_text.readLine());
        }
        for (int j = 0; j < lines.size(); j++)
        {
            QString line = lines.at(j);
            QStringList split = line.split(",");/*列數據*/
        }
        inFile.close();
    }
    return userList;
}
/*
QList<DataInterface::ShopInfo> DataInterface::ShopInfoReader()//Obsolete
{
    QList<DataInterface::ShopInfo> shopInfo;
    QFile inFile(rp +"//" + "ARS" + "//" + "Shops" + "//" + fileName.at(5) + ".csv");
    QStringList lines;
    if (inFile.open(QIODevice::ReadOnly))
    {
        QTextStream stream_text(&inFile);
        while (!stream_text.atEnd())
        {
            lines.push_back(stream_text.readLine());
        }
        for (int j = 0; j < lines.size(); j++)
        {
            QString line = lines.at(j);
            QStringList split = line.split(",");
        }
        inFile.close();
    }
    return shopInfo;
}
*/
void DataInterface::DataWriter(UserData userData)
{
    QString location = rp + "//" + "ARS" + "//" + "Users" + "//" + userData.tokenOrID + "//" + "userData" + ".csv";
    if(QFile::exists(location) != true)
    {
        QFile outFile(location);
        DataInitialization headLinePermission;
        QString headLine = "DateTime,eMail,Password,TokenOrID,CouponCoin\n";//headLinePermission.csvHeadline[0];
        if (outFile.open(QIODevice::WriteOnly))
        {
            outFile.write(headLine.toStdString().c_str());/*寫入每一行數據到文件*/
            outFile.close();
        }
    }
    QFile outFile(location);
    QString newLine = userData.time.toString(dtFormat) + "," + userData.email + "," + userData.password + "," + userData.tokenOrID + "," + QString::number(userData.couponCoin) + "\n";
    /*如果以ReadWrite方式打開，不會把所有數據清除，如果文件原來的長度爲100字節，寫操作寫入了30字節，那麼還剩餘70字節，並且這70字節和文件打開之前保持一直*/
    if (outFile.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        outFile.write(newLine.toStdString().c_str());/*寫入每一行數據到文件*/
        outFile.close();
    }
}
/*
void DataInterface::DataWriter(UserCoupon userCoupon, QString client)//Obsolete
{
    if(client != "")
    {
        client += "//";
    }
    QString location = rp +"//" + "ARS" + "//" + "Users" + "//" + client + "UserCoupon" + ".csv";
    if(!QFile::exists(location))
    {
        DataInitialization headLinePermission;
        QString headLine = headLinePermission.csvHeadline.at(1);
        QFile outFile(location);
        outFile.write(headLine.toStdString().c_str());
        outFile.close();
    }
    QFile outFile(location);
    QStringList lines;
    lines << "00,01,02\n" << "10,11,12\n" << "20,21,22";

    if (outFile.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        for (int i = 0; i < lines.size(); i++)
        {
            outFile.write(lines[i].toStdString().c_str());
        }
        outFile.close();
    }
}
*/
void DataInterface::DataWriter(CouponAmount coupon, QString client)
{
    QList<QList<CouponAmount>> coupons = CouponAmountReader(client);
    bool newCoupon = true;
    qDebug() << "Begin to loop";
    if(coupons.length() > 0)
    {
        for (int i = 0; i < coupons[coupon.shopType].length(); i++)
        {
            qDebug() << i;
            if(coupon.couponID == coupons[coupon.shopType][i].couponID)
            {
                qDebug() << "Added coupon";
                coupons[coupon.shopType][i].amount = coupon.amount;
                newCoupon = false;
                break;
            }
        }
    }
    if(newCoupon)
    {
        qDebug() << "New coupon detected.";
        if(coupons.length() < 6)
        {
            qDebug() << "Begin to append";
            QList<CouponAmount> tempoAmount;
            tempoAmount.append(coupon);
            coupons.append(tempoAmount);
            qDebug() << "append";
        }
        else
        {
            qDebug() << "Begin to append";
            coupons[coupon.shopType].append(coupon);
            qDebug() << "append";
        }
    }

    //write csv
    QString location = rp + "//" + "ARS" + "//" + "Users" + "//" + client + "//" + "CouponAmount" + ".csv";
    if(QFile::exists(location) != true)
    {
        qDebug() << "create new file";
        QFile outFile(location);
        DataInitialization headLinePermission;
        QString headLine = "ShopType,CouponID,Amount\n";//headLinePermission.csvHeadline[0];
        if (outFile.open(QIODevice::WriteOnly))
        {
            qDebug() << "create headline";
            outFile.write(headLine.toStdString().c_str());/*寫入每一行數據到文件*/
            outFile.close();
        }
        qDebug() << "New file created.";
    }
    qDebug() << "Begin to insert data.";
    QFile outFile(location);
    QString newLine = "";
    for (int i = 0; i < coupons.length(); i++)
    {
        for(int j = 0; j < coupons[i].length(); j++)
        {
            qDebug() << QString::number(coupons[i][j].shopType) + "," + coupons[i][j].couponID + "," + QString::number(coupons[i][j].amount);
            newLine += QString::number(coupons[i][j].shopType) + "," + coupons[i][j].couponID + "," + QString::number(coupons[i][j].amount) + "\n";
        }
    }
    /*如果以ReadWrite方式打開，不會把所有數據清除，如果文件原來的長度爲100字節，寫操作寫入了30字節，那麼還剩餘70字節，並且這70字節和文件打開之前保持一直*/
    if (outFile.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        outFile.write(newLine.toStdString().c_str());/*寫入每一行數據到文件*/
        outFile.close();
    }
}
void DataInterface::DataWriter(ShopData shopData)
{
    if(shopData.shopName != "")
    {
        shopData.shopName += "//";
    }
    QString location = rp +"//" + "ARS" + "//" + "Shops" + "//" + shopData.shopName + "ShopData" + ".csv";
    if(!QFile::exists(location))
    {
        DataInitialization headLinePermission;
        QString headLine = headLinePermission.csvHeadline.at(0);
        QFile outFile(location);
        outFile.write(headLine.toStdString().c_str());/*寫入每一行數據到文件*/
        outFile.close();
    }
    QFile outFile(location);
    QStringList lines;
    lines << "00,01,02\n" << "10,11,12\n" << "20,21,22";
    /*如果以ReadWrite方式打開，不會把所有數據清除，如果文件原來的長度爲100字節，寫操作寫入了30字節，那麼還剩餘70字節，並且這70字節和文件打開之前保持一直*/
    if (outFile.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        for (int i = 0; i < lines.size(); i++)
        {
            outFile.write(lines[i].toStdString().c_str());/*寫入每一行數據到文件*/
        }
        outFile.close();
    }
}
void DataInterface::DataWriter(ShopCoupon shopCoupon, QString client)
{
    if(client != "")
    {
        client += "//";
    }
    QString location = rp +"//" + "ARS" + "//" + "Shops" + "//" + client + "ShopCoupon" + ".csv";
    if(!QFile::exists(location))
    {
        DataInitialization headLinePermission;
        QString headLine = headLinePermission.csvHeadline.at(0);
        QFile outFile(location);
        outFile.write(headLine.toStdString().c_str());/*寫入每一行數據到文件*/
        outFile.close();
    }
    QFile outFile(location);
    QStringList lines;
    lines << "00,01,02\n" << "10,11,12\n" << "20,21,22";
    /*如果以ReadWrite方式打開，不會把所有數據清除，如果文件原來的長度爲100字節，寫操作寫入了30字節，那麼還剩餘70字節，並且這70字節和文件打開之前保持一直*/
    if (outFile.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        for (int i = 0; i < lines.size(); i++)
        {
            outFile.write(lines[i].toStdString().c_str());/*寫入每一行數據到文件*/
        }
        outFile.close();
    }
}
void DataInterface::DataWriter(UserInfo userInfo)
{
    if(userInfo.tokenOrID != "")
    {
        userInfo.tokenOrID += "//";
    }
    QString location = rp +"//" + "ARS" + "//" + "Users" + "//" + userInfo.tokenOrID + "UserList" + ".csv";
    if(!QFile::exists(location))
    {
        DataInitialization headLinePermission;
        QString headLine = headLinePermission.csvHeadline.at(0);
        QFile outFile(location);
        outFile.write(headLine.toStdString().c_str());/*寫入每一行數據到文件*/
        outFile.close();
    }
    QFile outFile(location);
    QStringList lines;
    lines << "00,01,02\n" << "10,11,12\n" << "20,21,22";
    /*如果以ReadWrite方式打開，不會把所有數據清除，如果文件原來的長度爲100字節，寫操作寫入了30字節，那麼還剩餘70字節，並且這70字節和文件打開之前保持一直*/
    if (outFile.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        for (int i = 0; i < lines.size(); i++)
        {
            outFile.write(lines[i].toStdString().c_str());/*寫入每一行數據到文件*/
        }
        outFile.close();
    }
}
/*
void DataInterface::DataWriter(ShopInfo shopInfo)//Obsolete
{
    if(shopInfo.shopName != "")
    {
        shopInfo.shopName += "//";
    }
    QString location = rp +"//" + "ARS" + "//" + "Shops" + "//" + shopInfo.shopName + "ShopList" + ".csv";
    if(!QFile::exists(location))
    {
        DataInitialization headLinePermission;
        QString headLine = headLinePermission.csvHeadline.at(0);
        QFile outFile(location);
        outFile.write(headLine.toStdString().c_str());
        outFile.close();
    }
    QFile outFile(location);
    QStringList lines;
    lines << "00,01,02\n" << "10,11,12\n" << "20,21,22";

    if (outFile.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        for (int i = 0; i < lines.size(); i++)
        {
            outFile.write(lines[i].toStdString().c_str());
        }
        outFile.close();
    }
}
*/
int DataInterface::ImageSpliter(QString inputImg)
{
    QFile file(rp +"//" + "ARS" + "//" + "Photo" + "//" + inputImg + ".png");
    file.open(QFile::ReadOnly);
    QByteArray buf = file.readAll();
    file.close();
    int counter = 0;
    for(int i = 0; i < buf.length(); i++)
    {
        if(buf[i] == ',')
        {
            counter++;
        }
    }
    return counter;
}

QByteArray DataInterface::PickImage(QString category, QString client, QString inputImg)
{
    QFile file(rp +"//" + "ARS" + "//" + category + "//" + client + "//" + inputImg + ".png");
    file.open(QFile::ReadOnly);
    QByteArray buf = file.readAll();
    file.close();
    return buf;
}

QList<QImage> DataInterface::ImageDecoder(QByteArray imageArray)
{
    int photostart = 0;
    QList<QImage> collector;
    for (int i = 0; i < imageArray.length(); i++)
    {
        QString spliteContainer = "";
        for (int j = 0; j < splitFormat.length(); j++)
        {
            spliteContainer.append(imageArray.at(i+j));
            //qDebug() << spliteContainer;
        }
        if(spliteContainer == splitFormat || i == imageArray.length() - splitFormat.length())
        {
            //qDebug() << spliteContainer + " in " + QString::number(i) + "/" + QString::number(imageArray.length());
            QByteArray photoByte;

            if(i == imageArray.length() - splitFormat.length())
            {
                for(int k = photostart; k < i + splitFormat.length(); k++)//for loop last time
                {
                    //qDebug() << QString::number(k) + " " + QString::number(i);
                    photoByte.append(imageArray.at(k));
                }
            }
            else
            {
                for(int k = photostart; k < i; k++)//have problem with loop
                {
                    //qDebug() << QString::number(k) + " " + QString::number(i);
                    photoByte.append(imageArray.at(k));
                }
            }
            qDebug() << "Photo byte end location: " + QString::number(photoByte.length());
            i += splitFormat.length();
            photostart = i;
            collector.append(QImage::fromData(photoByte));
            spliteContainer = "";
            qDebug() << "photos collected: " + QString::number(collector.length());
            qDebug() << collector[collector.length() -1];
        }
    }
    /*
    for(int i = 0; i < collector.length(); i++)
    {
        qDebug() << collector.at(i);
    }
    */
    return collector;
}

QString DataInterface::ReadUserDataBAD(QByteArray ba, int splitCounter)
{
    QString username;
    return username;
}
DataInterface::UserData DataInterface::WriteUserDataBAD(QByteArray ba, int splitCounter)
{
    UserData requestAccount;
    QDateTime timer;
    qDebug() << "true";
    for (int i = splitCounter; ba.at(i) != ','; i++)
    {
        requestAccount.email.append(ba.at(i));
        splitCounter = i;
    }
    qDebug() << "email: "<< requestAccount.email<<" readings:" <<splitCounter;
    splitCounter+= 2;
    for(int i = splitCounter; ba.at(i) != ',' || i < ba.at(i); i++)
    {
        requestAccount.password.append(ba.at(i));
        splitCounter = i;
    }
    qDebug() << "password: "<< requestAccount.password<<" readings:" <<splitCounter;
    splitCounter+=2;
    for(int i = splitCounter; ba.at(i) != ',' || i < ba.at(i); i++)
    {
        requestAccount.tokenOrID.append(ba.at(i));
        splitCounter = i;
    }
    qDebug() << "tokenOrID: "<< requestAccount.tokenOrID<<" readings:" <<splitCounter;
    splitCounter+=2;
    QString byteToString = "";
    for(int i = splitCounter; ba.at(i) != '\0' || i < ba.at(i); i++)
    {

        byteToString.append(ba.at(i));
        splitCounter = i;
    }
    requestAccount.couponCoin = byteToString.toInt();
    requestAccount.time = timer.currentDateTime();
    return requestAccount;
}
/*
DataInterface::UserCoupon DataInterface::WriteUserCouponBAD(QByteArray ba, int splitCounter)
{
    UserCoupon coupon;
    return coupon;
}
*/
QString DataInterface::NumberFilter(QString stringInput)
{
    QString stringOutput = "";
    for (const QChar c : qAsConst(stringInput)) {
      if (!c.isDigit()) {
        stringOutput.append(c);
      }
    }
    return stringOutput;
}
