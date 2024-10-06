#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include<QtWidgets>
#include"arthimeticFonction.h"
#include"QtWidgets"
#include"NUMBERS_TYPES_INTEGER.h"

class mainWindow : public QWidget
{
    Q_OBJECT
public:
    mainWindow();

protected:
    QGridLayout *m_ranger1;
    QLCDNumber *m_resultat;
    QSpinBox *m_number1;
    QSpinBox *m_number2;
    QPushButton *m_additionBut;
    QPushButton *m_substractionBut;
    QPushButton *m_multiplicationBut;
    QPushButton *m_divisionBut;
    QPushButton *m_equalBut;
    integer m_term1;
    integer m_term2;
    
};

#endif // MAIN_WINDOW_H
