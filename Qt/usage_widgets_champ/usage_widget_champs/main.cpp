#include <QApplication>
#include <QtWidgets>

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QWidget fenetre;

    QLineEdit *ligne = new QLineEdit;
    ligne->setEchoMode(QLineEdit::Password);

    QTextEdit *texte = new QTextEdit;

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(ligne);
    layout->addWidget(texte);

    QSpinBox *intier = new QSpinBox;
    intier->setAccelerated(true);
    intier->setMinimum(0);
    intier->setMaximum(1000);
    intier->setSingleStep(5);
    layout->addWidget(intier);

    QDoubleSpinBox *decimal = new QDoubleSpinBox;
    decimal->setDecimals(2);
    layout->addWidget(decimal);

    QSlider *slider1 = new QSlider;
    slider1->setOrientation(Qt::Horizontal);
    layout->addWidget(slider1);

    QComboBox *combo1 = new QComboBox;
    combo1->setEditable(true);
    combo1->addItem("bujumbura");
    combo1->addItem("kigali");
    combo1->addItem("mumbasa");

    layout->addWidget(combo1);


    fenetre.setLayout(layout);
    fenetre.show();

    return app.exec();
}
