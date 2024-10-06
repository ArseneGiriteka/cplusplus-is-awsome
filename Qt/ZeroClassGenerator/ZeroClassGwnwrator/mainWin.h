#ifndef MAINWIN_H
#define MAINWIN_H

#include "winCodeGenerate.h"

class mainWin : public QWidget
{
   Q_OBJECT
public:
    mainWin();
public slots:
    void bouttonGenerer();

signals:
    

 protected:


 private:
    QGridLayout *m_mainLayout;

    QLineEdit *m_nom;
    QLineEdit *m_classeMere;
    QFormLayout *m_layout1;
    QGroupBox *m_definitionClasse;

    QCheckBox *m_check1;
    QCheckBox *m_check2;
    QCheckBox *m_check3;
    QVBoxLayout *m_layout2;
    QGroupBox *m_option;

    QGroupBox *m_commentaire;
    QFormLayout *m_layout3;
    QCheckBox *m_title;
    QLineEdit *m_auteur;
    QDateEdit *m_date;
    QTextEdit *m_roleText;


    QHBoxLayout *m_layout4;
    QPushButton *m_genererBut;
    QPushButton *m_quit;

    winSec *m_smsBox;
};

#endif // MAINWIN_H
