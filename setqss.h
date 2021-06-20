#ifndef SETQSS_H
#define SETQSS_H
#include<QString>
#include<QDebug>

#define cout qDebug()<<__FILE__<<"line:"<<__LINE__      //bug调试
#define fromFile(qssFile) SetQss(qssFile)()             //从文件获取qss
class SetQss
{
public:
    SetQss(QString qssFile);
    QString operator()();
    QString qssFile;
};

#endif // SETQSS_H
