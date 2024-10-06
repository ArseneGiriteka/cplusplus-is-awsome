#include "mainWin.h"

mainWin::mainWin():QWidget()
{
    m_mainLayout = new QGridLayout(this);

    m_nom = new QLineEdit;
    m_classeMere =new QLineEdit;
    m_layout1 = new QFormLayout;
    m_layout1->addRow("nom :",m_nom);
    m_layout1->addRow("classe mere :",m_classeMere);
    m_definitionClasse = new QGroupBox;
    m_definitionClasse->setTitle("definition de la classe");
    m_definitionClasse->setLayout(m_layout1);
    m_mainLayout -> addWidget(m_definitionClasse,1,0,1,4);

    m_check1 = new QCheckBox("Proteger les headers");
    m_check2 = new QCheckBox("Gerer un constructeur par defaut");
    m_check3 = new QCheckBox("Generer un destructeur");
    m_layout2 = new QVBoxLayout;
    m_layout2->addWidget(m_check1);
    m_layout2->addWidget(m_check2);
    m_layout2->addWidget(m_check3);
    m_option = new QGroupBox;
    m_option->setLayout(m_layout2);
    m_mainLayout->addWidget(m_option,2,0,1,4);

    m_option = new QGroupBox;
    m_layout3 = new QFormLayout;
    m_auteur = new QLineEdit;
    m_date = new QDateEdit;
    m_roleText = new QTextEdit;
    m_layout3->addRow("Auteur :",m_auteur);
    m_layout3->addRow("Date :",m_date);
    m_layout3->addRow("Role de la classe",m_roleText);
    m_option->setCheckable(true);
    m_option->setTitle("Ajouter des commentaires");
    m_option->setLayout(m_layout3);
    m_mainLayout->addWidget(m_option,3,0,1,4);

    m_genererBut = new QPushButton("generer");
    m_quit = new QPushButton("quiter");
    m_mainLayout->addWidget(m_genererBut,4,2);

    m_mainLayout->addWidget(m_quit,4,3);
    m_smsBox = new winSec;

    QObject::connect(m_genererBut,SIGNAL(clicked()),this,SLOT(bouttonGenerer()));
    QObject::connect(m_quit,SIGNAL(clicked()),qApp,SLOT(quit()));
}

void mainWin::bouttonGenerer()
{
     if(m_nom->text().isEmpty())
     {
         QMessageBox::critical(this,"Erreur","veuillez entrer au moins un nom");
         return;
     }
     QString code;

     winSec *newWindow = new winSec(code,this);
     newWindow->exec();
}
