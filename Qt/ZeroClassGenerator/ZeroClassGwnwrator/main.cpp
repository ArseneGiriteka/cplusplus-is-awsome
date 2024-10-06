#include "mainWin.h"

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    mainWin fenetre;
    fenetre.show();
    return app.exec();
}
