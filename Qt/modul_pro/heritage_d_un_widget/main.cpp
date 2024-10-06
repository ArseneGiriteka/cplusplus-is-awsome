#include <MyWindow.h>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);

    QWidget fenetre;

    QPushButton button("good mornig",&fenetre);
    button.move(70,60);
    fenetre.show();

    return app.exec();
}
