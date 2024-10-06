#include <QApplication>
#include <QtWidgets>


int main(int argc,char *argv[])
{
    QApplication app(argc,argv);

    QWidget fenetre;
    QPushButton *boutton = new QPushButton("ouvrir la fenetre",&fenetre);

    QDialog secondeFenetre;
    QVBoxLayout *layout = new QVBoxLayout;
    QLabel *image = new QLabel(&secondeFenetre);
    image->setPixmap(QPixmap("clin.png"));
    layout->addWidget(image);
    secondeFenetre.setLayout(layout);
    secondeFenetre.setWindowTitle("clin");
    secondeFenetre.setWindowIcon(QIcon("clin.png"));
    fenetre.setWindowTitle("hey");

    QWidget::connect(boutton,SIGNAL(clicked()),&secondeFenetre,SLOT(exec()));

    fenetre.show();
    return app.exec();
}
