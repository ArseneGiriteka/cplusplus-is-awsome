#include "mainWin.h"

winSec::winSec()
{
   layoutBoxy = new QVBoxLayout(this);
   formulText = new QFormLayout;
   textZone = new QTextEdit;
   textZone->setReadOnly(true);
   formulText->addRow(textZone);

   dateZone = new QDateEdit;
   formulText->addRow(dateZone);

   closeBut = new QPushButton("fermer");
   layoutBoxy->addLayout(formulText);
   layoutBoxy->addWidget(closeBut);
   connect(closeBut,SIGNAL(clicked()),this,SLOT(quit()));
}
winSec::winSec(QString &code,QWidget *parent=0):QDialog(parent)
{
    codeScript = new QTextEdit();
    codeScript->setPlainText(code);
    codeScript->setReadOnly(true);
    codeScript->setFont(QFont("courier"));
    codeScript->setLineWrapMode(QTextEdit::NoWrap);

    closeBut = new QPushButton("fermer");

    QVBoxLayout *layoutPrinc = new QVBoxLayout;
    layoutPrinc->addWidget(codeScript);
    layoutPrinc->addWidget(closeBut);
    resize(350,450);
    setLayout(layoutPrinc);
    connect(closeBut,SIGNAL(clicked()),this,SLOT(accept()));
}
