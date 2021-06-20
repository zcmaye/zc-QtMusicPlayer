#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
//#include"homescreen.h"

//namespace Ui {
//class MainWidget;
//}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget();
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

    void InitComponentWindow();     //初始化组件窗口

private:
    //Ui::MainWidget *ui;
    //窗口移动
    bool isDrag = false;
    QPoint startPos;

    //HomeScreen *homeScreen;
};

#endif // MAINWIDGET_H
