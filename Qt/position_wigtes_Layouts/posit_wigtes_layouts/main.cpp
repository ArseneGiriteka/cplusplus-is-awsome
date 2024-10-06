#include <QApplication>
#include <QPushButton>
#include <QFormLayout>
#include <QLineEdit>
#include <QVBoxLayout>

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);

    QWidget fenetre;

    QLineEdit *nom = new QLineEdit;
    QLineEdit *prenom = new QLineEdit;
    QLineEdit *age = new QLineEdit;

    QFormLayout *layoutFormul = new QFormLayout;
    layoutFormul->addRow("&nom :",nom);
    layoutFormul->addRow("&prenom :",prenom);
    layoutFormul->addRow("&age :",age);

    QVBoxLayout *layoutPrincipal = new QVBoxLayout;
    layoutPrincipal->addLayout(layoutFormul);

    QPushButton *quitBut = new QPushButton("Quit");
    QObject::connect(quitBut,SIGNAL(clicked()),&app,SLOT(quit()));
    layoutPrincipal->addWidget(quitBut);

    fenetre.setWindowFlag(Qt::WindowStaysOnTopHint);
    fenetre.setWindowIcon(QIcon("clin.png"));
    fenetre.setLayout(layoutPrincipal);

    fenetre.show();
    return app.exec();
}
//pour <QBoxLayout>addWidget(&bouton)
//pour <QGridLayout>addWidget(&bouton,ax,ay)

/*
 * pour <QFormLayout>addRow(QString,&editeur)
 * on peut aussi creer des racourcis with '&'
*/
