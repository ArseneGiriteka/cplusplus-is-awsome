#include <QApplication>
#include <QPushButton>
//what will i make!!
int main(int argc,char *argv[])
{
    QApplication app(argc,argv);//creer un objet de type Qapplication
    
    QPushButton bouton("salut les gard etez vous motives");
    bouton.setText(bouton.text());//modefier le text
    bouton.setToolTip("aid");//cree un texte qui apparair quand l'on pointe sur le boutton
    QFont maPolice("courier");
    bouton.setFont(QFont("comic sans MS",15,15,true));
    bouton.setCursor(Qt::PointingHandCursor);
    
    bouton.show();//afficher le bouton

    return app.exec();//sortir un application gui a la fin;
}
