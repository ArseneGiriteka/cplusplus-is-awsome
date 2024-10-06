#include <QApplication>
#include <QtWidgets>
#include <QHBoxLayout>
#include <QProgressBar>

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);

    QWidget fenetre;

    QLabel *label = new QLabel;
    label->setPixmap(QPixmap("clin.png"));

    QLabel *label1 = new QLabel("hello");
    QHBoxLayout *layout = new QHBoxLayout;

    layout->addWidget(label);
    layout->addWidget(label1);

    QProgressBar *bar1 = new QProgressBar;
    bar1->setValue(87);
    bar1->setRange(0,1000);
    bar1->setValue(590);
    layout->addWidget(bar1);
    fenetre.setLayout(layout);
    fenetre.show();
    return app.exec();
}//QLabel && QProgressBar
