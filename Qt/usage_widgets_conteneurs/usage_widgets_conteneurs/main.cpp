#include <QApplication>
#include <QtWidgets>

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QWidget fenetre;

    QTabWidget *onglets = new QTabWidget(&fenetre);
    onglets->setGeometry(30,20,1000,1000);

    QWidget *page1 = new QWidget;
    QWidget *page2 = new QWidget;
    QLabel *page3 = new QLabel;

    //page1

    QLineEdit *nom = new QLineEdit("Entrez votre nom ");
    QPushButton *button1 = new QPushButton("Ok");
    QPushButton *button2 = new QPushButton("Annulez");

    QVBoxLayout *Vbox1 = new QVBoxLayout;
    Vbox1->addWidget(nom);
    Vbox1->addWidget(button1);
    Vbox1->addWidget(button2);

    page1->setLayout(Vbox1);//insertion du layout ds la page1

    //page2

    QProgressBar *bar1 = new QProgressBar;
    QSlider *slider1 = new QSlider;
    slider1->setValue(50);
    slider1->setOrientation(Qt::Horizontal);
    QPushButton *button3 = new QPushButton("validez");

    QVBoxLayout *Vbox2 = new QVBoxLayout;
    Vbox2->addWidget(bar1);
    Vbox2->addWidget(slider1);
    Vbox2->addWidget(button3);

    page2->setLayout(Vbox2);

    //page3

    page3->setPixmap(QPixmap("michou.JPG"));
    page3->setAlignment(Qt::AlignCenter);

    onglets->addTab(page1,"presentation");
    onglets->addTab(page2,"progress");
    onglets->addTab(page3,"image");

    fenetre.show();

    return app.exec();
}
