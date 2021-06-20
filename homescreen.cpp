#include "homescreen.h"
#include "ui_homescreen.h"
#include "setqss.h"

HomeScreen::HomeScreen(QWidget *parent) :
    MainWidget(parent),
    ui(new Ui::HomeScreen)
{
    ui->setupUi(this);
    this->setContentsMargins(0,0,0,0);
   // this->setStyleSheet(fromFile(":/res/qss/homeScreen.qss"));

}

HomeScreen::~HomeScreen()
{
    delete ui;
}

void HomeScreen::resizeEvent(QResizeEvent *event)
{
    //让右上角按钮始终保持在右上角
    int w = ui->btn_quit->width();
    ui->btn_quit->move(width()-w-10,0);
    ui->btn_max->move(width()-w*2-10,0);
    ui->btn_min->move(width()-w*3-10,0);
    ui->btn_menu->move(width()-w*4-10,0);

    //让搜索框保持相对位置
    ui->lineEdit_search->move(width()/3,20);
    ui->btn_search->move(width()/3+ui->lineEdit_search->width()+20,20);

    //底部按钮所在的窗口随着窗口的大小变化
    //ui->bottom_widget->setFixedSize(this->width(),70);
    int x = (this->width()-ui->bottom_widget->width())/2;
    ui->bottom_widget->move(x,this->height()-70);

}

void HomeScreen::on_btn_quit_clicked()
{
    QApplication::quit();
}

void HomeScreen::on_btn_max_clicked()
{
    if(this->isMaximized())
        this->showNormal();
    else
        this->showMaximized();
}

void HomeScreen::on_btn_min_clicked()
{
    this->showMinimized();
}

void HomeScreen::on_btn_menu_clicked()
{

}

void HomeScreen::on_btn_search_clicked()
{

}
