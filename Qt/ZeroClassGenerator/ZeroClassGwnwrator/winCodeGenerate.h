#ifndef WINCONDEGENERATE_H
#define WINCONDEGENERATE_H
#include <QApplication>
#include <QtWidgets>


class winSec : public QDialog
{
public:
    winSec();
    winSec(const QString&, const QDateEdit&);
    winSec(QString &code,QWidget *parent);

protected:

private:
    QTextEdit *textZone;
    QDateEdit *dateZone;
    QPushButton *closeBut;
    QFormLayout *formulText;
    QVBoxLayout *layoutBoxy;
    QTextEdit *codeScript;

};


#endif // WINCONDEGENERATE_H
