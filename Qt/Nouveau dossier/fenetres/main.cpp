#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QIcon>
#include <QFont>

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);

    QWidget window;
    window.setFixedSize(500,500);

    QPushButton bouton("hello",&window);//mean where will be the button(&myWidget)
    bouton.setFont(QFont("comic sans MS",14));
    bouton.setCursor(Qt::PointingHandCursor);
    bouton.setIcon(QIcon("smile.png"));
    bouton.move(100,100);//pour placer le boutton ailleur dans la fenetres
    bouton.setGeometry(1,1,100,100);

    QPushButton autreBouton("mandela",&bouton);
    autreBouton.move(1,1);

    window.show();
    return app.exec();
}
