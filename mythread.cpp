#include "mythread.h"
#include <QtCore>
#include <QDebug>
MyThread::MyThread()
{

}

void MyThread::run()
{
    qDebug () << this->name<<"Runnig";
    for(int i=1;i<1000000;i++)
    {

        qDebug() <<this->name <<i;
    }

}
