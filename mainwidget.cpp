#include "mainwidget.h"
//#include "ui_mainwidget.h"
#include<QGraphicsDropShadowEffect>
#include<QMouseEvent>
#include<QDebug>
MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent)/*,
    ui(new Ui::MainWidget)*/
{
    //ui->setupUi(this);
    this->setAutoFillBackground(true);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setMouseTracking(true);
    this->resize(1220,720);
    InitComponentWindow();

//    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
//    effect->setOffset(1,1);
//    effect->setColor(Qt::gray);
//    effect->setBlurRadius(10);
//    this->setGraphicsEffect(effect);
}

MainWidget::~MainWidget()
{
    //delete ui;
}

void MainWidget::mouseMoveEvent(QMouseEvent *event)
{
    if(isDrag)
    {
        this->move(event->globalPos() - startPos);
    }
}

void MainWidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        isDrag = true;
        startPos = event->globalPos() - this->pos();
    }
}

void MainWidget::mouseReleaseEvent(QMouseEvent *event)
{
    if(isDrag)
    {
        isDrag = false;
    }
}

void MainWidget::InitComponentWindow()
{
    //homeScreen = new HomeScreen(this);
   // homeScreen->show();
}
