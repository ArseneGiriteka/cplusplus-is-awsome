#include <QApplication>
#include <QtWidgets>

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QWidget fenetre;

    QGroupBox *groupBox= new QGroupBox("voutre plats prefere",&fenetre);

    QRadioButton *steacks = new QRadioButton("les steacks");
    QRadioButton *hamburgers = new QRadioButton("les hamburgers");
    QRadioButton *nuggets = new QRadioButton("les nuggets");

    steacks->setChecked(true);

    QVBoxLayout *Vbox = new QVBoxLayout;

    Vbox->addWidget(steacks);
    Vbox->addWidget(hamburgers);
    Vbox->addWidget(nuggets);

    groupBox->setLayout(Vbox);
    groupBox->move(5,5);

    fenetre.show();
    return app.exec();
}
