#include <MyWindow.h>

MyWindow::MyWindow():QWidget()
{
    setFixedSize(300,150);

    m_button = new QPushButton("Quit",this);
    m_reseterButton = new QPushButton("reset",this);


    m_button->setFont(QFont("Comic Sans MS",10));
    m_button->setCursor(Qt::UpArrowCursor);
    m_button->setIcon(QIcon("clin.png"));
    m_button->setGeometry(50,1,50,20);

    m_progressBar = new  QProgressBar(this);
    m_progressBar->setGeometry(1,30,96,15);

    m_slider = new QSlider(Qt::Horizontal,this);
    m_slider->setRange(0,100);
    m_slider->setGeometry(1,50,96,10);

    m_reseterButton->setFont(QFont("Comic Sans MS",10));
    m_reseterButton->setCursor(Qt::PointingHandCursor);
    m_reseterButton->setGeometry(1,65,50,15);

    m_sizerSlider = new QSlider(Qt::Horizontal,this);
    m_sizerSlider->setRange(300,1000);
    m_sizerSlider->setGeometry(1,90,90,5);
    QObject::connect(m_sizerSlider,SIGNAL(valueChanged(int)),this,SLOT(changerLargeur(int)));

    m_hsizerSlider = new QSlider(this);
    m_hsizerSlider->setRange(300,1000);
    m_hsizerSlider->setGeometry(96,5,5,94);
    QObject::connect(m_hsizerSlider,SIGNAL(valueChanged(int)),this,SLOT(changerHauteur(int)));

    m_ouvrirDialogue = new QPushButton("open messagebox",this);
    m_ouvrirDialogue->move(100,1);
    QObject::connect(m_ouvrirDialogue,SIGNAL(clicked()),this,SLOT(ouvrirBoiteDialogue()));

    m_afficheurPseudo=new QPushButton("pas pseudo",this);
    m_afficheurPseudo->setFont(QFont("Comic Sans MS",15));
    m_afficheurPseudo->move(110,30);
    QObject::connect(m_afficheurPseudo,SIGNAL(clicked()),this,SLOT(fontChosing()));
    QObject::connect(this,SIGNAL(pseudoCree(QString)),this,SLOT(vaAfficherLePseudo(QString)));

    m_setColourBut = new QPushButton("colour",this);
    m_setColourBut->setFont(QFont("Calibri",15));
    m_setColourBut->move(100,45);
    QObject::connect(m_setColourBut,SIGNAL(clicked()),this,SLOT(colourChosing()));

    m_selectFile = new QPushButton("select File",this);
    m_selectFile->setFont(QFont("Calibri",10));
    m_selectFile->move(100,60);
    QObject::connect(m_selectFile,SIGNAL(clicked()),this,SLOT(selectrDossier()));

    m_openigFile = new QPushButton("open file",this);
    m_openigFile->setFont(QFont("Comic Sans MS",10));
    m_openigFile->setGeometry(100,80,60,20);
    QObject::connect(m_openigFile,SIGNAL(clicked()),this,SLOT(openingFile()));

    m_saveingFile = new QPushButton("save File",this);
    m_saveingFile->setFont(QFont("Comic Sans MS",10));
    m_saveingFile->setGeometry(100,80,60,20);
    QObject::connect(m_saveingFile,SIGNAL(clicked()),this,SLOT(savingFile()));

    QObject::connect(this,SIGNAL(agrandissementMax()),qApp,SLOT(quit()));
    QObject::connect(m_reseterButton,SIGNAL(clicked()),m_progressBar,SLOT(reset()));

    QObject::connect(m_slider,SIGNAL(valueChanged(int)),m_progressBar,SLOT(setValue(int)));
    QObject::connect(m_button,SIGNAL(clicked()), qApp,SLOT(quit()));

}

MyWindow::~MyWindow()
{
    delete m_button;
}

MyWindow::MyWindow(int larg,int longu):QWidget()
{
    m_button = new QPushButton("Quit",this);

    setFixedSize(larg,longu);
    m_button->setFont(QFont("Comic Sans MS",10));
    m_button->setCursor(Qt::PointingHandCursor);
    m_button->setIcon(QIcon("clin.png"));
    m_button->move(1,1);
    m_button->setToolTip("customized window");
    m_button->setGeometry(900,1,100,30);

    m_lcd =new QLCDNumber(this);
    m_lcd->setSegmentStyle(QLCDNumber::Flat);
    m_lcd->setGeometry(100,300,100,20);

    m_slider = new QSlider(Qt::Horizontal,this);
    m_slider->setGeometry(100,500,150,20);

    QObject::connect(m_slider,SIGNAL(valueChanged(int)),m_lcd,SLOT(display(int)));

    QObject::connect(m_button,SIGNAL(clicked()), qApp,SLOT(quit()));

}

void MyWindow::changerLargeur(int largeur)
{
    setFixedSize(largeur,height());
    if(largeur==1000)
    {
        emit agrandissementMax();//mot-cle pour renvoiyer un signal(*****emit****)
    }
}

void MyWindow::changerHauteur(int hauteur)
{
    setFixedSize(width(),hauteur);
}

void MyWindow::ouvrirDialogue()
{
   int reply=QMessageBox::question(this,"message","hey <strong>ARE YOU JONH</strong>",QMessageBox::Yes|QMessageBox::No);//infomation,warning,critical,question
   if(reply==QMessageBox::Yes)
   {
       QMessageBox::information(this,"greatting","A long time my friend");
   }

   else if(reply == QMessageBox::No)
   {
       QMessageBox::critical(this,"appologizing","sorry sir");
   }

}

void MyWindow::ouvrirBoiteDialogue()
{
    bool ok = false;
    QString pseudo = QInputDialog::getText(this,"pseudo","Quelle votre pseudo",QLineEdit::Normal,QString(),&ok);

    if(ok && !pseudo.isEmpty())
    {
        QMessageBox::information(this,"pseudo","bonjours "+pseudo+" ca va");
        emit pseudoCree(pseudo);
    }
    else
    {
        QMessageBox::critical(this,"Pseudo","you didn't wanna to give your name");
    }
}

void MyWindow::vaAfficherLePseudo(const QString &nom)
{
   m_afficheurPseudo->setText(nom);
}

void MyWindow::fontChosing()
{
    bool ok=false;
    QFont police=QFontDialog::getFont(&ok,m_afficheurPseudo->font(),this,"chose your police");

    if(ok)
    {
        m_afficheurPseudo->setFont(police);
    }
}

void MyWindow::colourChosing()
{
    QColor myColor=QColorDialog::getColor(Qt::blue,this);

    QPalette palette;
    palette.setColor(QPalette::ButtonText,myColor);
    setPalette(palette);
}

void MyWindow::selectrDossier()
{
    QString dossier= QFileDialog::getExistingDirectory(this);
}

void MyWindow::openingFile()
{
    QString fichier = QFileDialog::getOpenFileName(this,"ouvrir un fichier",QString(),"Images(*.png *.jpg *.gif *.jpeg)");
    QMessageBox::information(this,"Fichier","vous avez selectione :\n"+fichier);

}

void MyWindow::savingFile()
{
    QString fichier = QFileDialog::getSaveFileName(this,"enregistrer un fichier",QString(),"Images(*.png *.gif *.jpg *.jpeg");
    QMessageBox::information(this,"saveFile","vous avez enregistre :\n"+fichier) ;
}

