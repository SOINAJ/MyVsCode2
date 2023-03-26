#pragma once

#include <QtWidgets/QWidget>
#include "ui_MyQtWork1.h"

class MyQtWork1 : public QWidget
{
    Q_OBJECT

public:
    MyQtWork1(QWidget *parent = nullptr);
    ~MyQtWork1();

private:
    Ui::MyQtWork1Class ui;
};
