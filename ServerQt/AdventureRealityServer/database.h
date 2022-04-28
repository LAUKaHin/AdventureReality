#ifndef Database_H
#define Database_H
#include <QMainWindow>
#include <QCoreApplication>
#include <list>
#include <iterator>
#include <qdatetime.h>
#include <iostream>
#include <QtDebug>

using namespace std;
namespace Ui {
    class Database;
    class DataInterface;
    class DataInitialization;
}
class Database : public QMainWindow
{
    Q_OBJECT

public:
    explicit Database(QWidget *parent = nullptr);
    ~Database();

private:
    Ui::Database *ui;
};

class DataInterface
{
public:
    const QStringList fileName = {"UserData", "UserCoupon", "ShopData", "ShopCoupon", "UserList", "ShopList"};

public:
    struct UserData
    {
        public:
            QDateTime time;
            QString email;
            QString password;
            QString tokenOrID;
            int couponCoin;
    };
    UserData testPlayer = UserData();
    /*
    struct UserCoupon
    {
        public:
            QString couponID;
            uint shopType;
            QDateTime getDate;
            QDateTime usedDate;
            QImage couponImage;
    };
    */
    struct CouponAmount//Amount of UserCoupon
    {
        public:
            QString couponID;//Just include EngLetter
            QString shopname;
            uint shopType;
            uint amount;
            QImage couponImage;
    };
    struct ShopData
    {
        public:
            QDate date;
            uint shopType;
            QString shopName;
            QString District;
            QString location;
            QString shortName;
            QString discription;
            QString contact;
            uint cgc;//Coupon get count
            QVector<int> latlon;//Game canvas location X and y
    };
    struct ShopCoupon
    {
        public:
            QString couponID;
            uint shopType;
            QString title;
            QString content;
            uint cost;
            QImage image;
            QString imageLocation;
            QString holder;//The user who have this coupon
            QDateTime enabledDate;
            QDateTime disabledDate;
            QImage qrCode;
            QString qrImageLocation;
    };
    struct UserInfo
    {
        public:
            QDateTime time;
            QString email;
            QString tokenOrID;
            int couponCoin;
    };
    QList<UserInfo> userList;

    struct ShopInfo
    {
        public:
            QString shopName;
            uint shopType;
            QDateTime date;
            uint cgc;
            QString District;
            QString contact;
    };
    QList<ShopInfo> shopList; 

private:
    QString rp = QCoreApplication::applicationDirPath();
    QString dtFormat = "yyyy:MM:dd:HH:mm:ss";
    QString splitFormat = "<AdventureReality>";

public:
    //CSV Reader
    UserData UserDataReader(QString client);
    //QList<UserCoupon> UserCouponReader(QString client);
    QList<QList<QList<CouponAmount>>> CouponAmountaReader(QString client);
    ShopData ShopDataReader(QString client);
    QList<QList<QList<ShopCoupon>>> ShopCouponReader(QString client);
    QList<UserInfo> UserInfoReader();
    QList<ShopInfo> ShopInfoReader();

    //CSV Writer
    void DataWriter(UserData userData);
    //void DataWriter(UserCoupon userCoupon, QString client);
    void DataWriter(ShopCoupon shopCoupon, uint amount, QString client);//For edit CouponAmount.csv
    void DataWriter(ShopData shopData);
    void DataWriter(ShopCoupon shopCoupon, QString client);//For edit ShopCoupon.csv
    void DataWriter(UserInfo userInfo);
    void DataWriter(ShopInfo shopInfo);

    //ByteArray decoder
    QString ReadUserDataBAD(QByteArray ba, int splitCounter);
    UserData WriteUserDataBAD(QByteArray ba, int splitCounter);
    QString ReadUserCouponBAD(QByteArray ba, int count);//No need this function.
    //UserCoupon WriteUserCouponBAD(QByteArray ba, int splitCounter);
    ShopData ReadShopDataBAD(QByteArray ba, int count);//No need this function.
    ShopCoupon ReadShopCouponBAD(QByteArray ba, int count);//No need this function.

    //ByteArray encoder

    //Big Data Sampling
    int GetCouponLength(QList<ShopCoupon> couponList);

    //Auxiliary/ Test Functions
    QString NumberFilter(QString stringInput);
    QStringList QtCSV_Reader(QString category, QString client, QString filename);
    void QtCSV_Writer(QString category, QString client, QString filename);

private:
    //Auxiliary/ Test Functions
    int ImageSpliter(QString inputImg);
    QByteArray PickImage(QString category, QString client, QString inputImg);
    QList<QImage> ImageDecoder(QByteArray imageArray);


};

class DataInitialization
{
private:
    const QString rp = QCoreApplication::applicationDirPath();
public:
    const QStringList directoryName = {"ARS", "Users", "Shops"};
    const QList<int> loop = {1, 2};
    const QStringList csvHeadline =
    {
        "DateTime,eMail,Password,TokenOrID,CouponCoin\n",//for UserData.
        "couponID,GetDate,UsedDate,imageLocation",//for UserCoupon.
        "shopName,ShortName,ShopType,Discription,DateTime,cgc,District,Location,Contact,lat,lon\n",//for ShopData.
        "PromotionType,CouponID,Title,Content,Cost,Holder,EnabledDate,DisabledDate,ImageLocation\n",//for ShopCoupon
        "DateTime,eMail,TokenOrID,CouponCoin\n",//for UserInfo
        "shopName,shopType,date,cgc,District,contact\n"//for ShopInfo
    };
public:
    void DatabaseInitialization();

    void CreateDirectory(QList<QString> directoryName, QList<int> loopTime);
    void CreateUser(DataInterface::UserData userData);
    void CreateShop();
    const char* QStringCharConvertor(QString qsInput);
};

#endif Database_H
