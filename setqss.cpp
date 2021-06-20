#include "setqss.h"
#include<QFile>
#include<QIODevice>

SetQss::SetQss(QString qssFile)
{
    this->qssFile = qssFile;
}

QString SetQss::operator()()
{
   QFile read(qssFile);
   if(!read.open(QIODevice::ReadOnly | QIODevice::Text))
   {
       cout<<qssFile<<"open failed";
   }
   QString qss = read.readAll();
   read.close();
   return qss;
}
