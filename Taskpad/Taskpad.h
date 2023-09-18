#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Taskpad.h"

class Taskpad : public QMainWindow
{
    Q_OBJECT

public:
    Taskpad(QWidget *parent = nullptr);
    ~Taskpad();

private:
    Ui::TaskpadClass ui;
};
