#include "mywindow.h"

int main(int argc,char *argv[]){
    QApplication app(argc,argv);

    MyWindow window(900,450);

    window.kangalo();

    window.show();

    return app.exec();
}
