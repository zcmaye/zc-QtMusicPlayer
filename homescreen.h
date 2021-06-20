#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QWidget>
#include"mainwidget.h"

namespace Ui {
class HomeScreen;
}

class HomeScreen : public MainWidget
{
    Q_OBJECT

public:
    explicit HomeScreen(QWidget *parent = nullptr);
    ~HomeScreen();
    void resizeEvent(QResizeEvent *event);

private slots:
    void on_btn_quit_clicked();

    void on_btn_max_clicked();

    void on_btn_min_clicked();

    void on_btn_menu_clicked();

    void on_btn_search_clicked();

private:
    Ui::HomeScreen *ui;
};

#endif // HOMESCREEN_H
