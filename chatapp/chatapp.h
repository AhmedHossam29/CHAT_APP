#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_chatapp.h"

class chatapp : public QMainWindow
{
    Q_OBJECT

public:
    chatapp(QWidget *parent = nullptr);
    ~chatapp();

private:
    Ui::chatappClass ui;
};
