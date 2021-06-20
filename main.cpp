#include<QApplication>
//#include"mainwidget.h"
#include"homescreen.h"
int main(int argc,char *argv[])
{
    QApplication a(argc,argv);
    //MainWidget w;
    HomeScreen w;
    w.show();

    return a.exec();
}
