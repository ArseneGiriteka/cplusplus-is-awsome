#ifndef MYWINDOW_H
#define MYWINDOW_H

#include<QApplication>
#include<QWidget>
#include<QPushButton>
#include<QGridLayout>

class MyWindow:public QWidget
{
public:
    MyWindow();
    MyWindow(int heitgh,int weitgh);
    ~MyWindow();

    void kangalo();

private:
    QPushButton *m_button;
};

#endif // MYWINDOW_H
