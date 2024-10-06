#include "main_window.h"

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    mainWindow fenetrePrincipale;
    fenetrePrincipale.show();
    return app.exec();
}
