#include"main_window.h"

mainWindow::mainWindow():QWidget()
{
    m_number1 = new QSpinBox(this);
    m_number1->setGeometry(1,1,200,50);

    m_number2 = new QSpinBox(this);
    m_number2->setGeometry(25,1,20,5);

    m_resultat = new QLCDNumber(this);
    m_resultat->setGeometry(1,7,10,5);

    m_additionBut = new QPushButton("+",this);
    m_additionBut->setGeometry(1,14,5,5);

    m_substractionBut = new QPushButton("-",this);
    m_substractionBut->setGeometry(7,14,5,5);

    m_divisionBut = new QPushButton("/",this);
    m_divisionBut->setGeometry(14,14,5,5);

    m_multiplicationBut = new QPushButton("*",this);
    m_multiplicationBut->setGeometry(21,14,5,5);

    m_equalBut= new QPushButton("=",this);
    m_equalBut->setGeometry(27,14,5,5);

}
