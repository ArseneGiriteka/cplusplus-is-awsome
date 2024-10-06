#include "mywindow.h"

MyWindow::MyWindow():QWidget()
{
    setFixedSize(300,300);

    m_button = new QPushButton("biba",this);
    m_button->setFont(QFont("Comic Sans MS",14));
    m_button->setCursor(Qt::PointingHandCursor);
    m_button->move(50,50);
    m_button->setFixedSize(50,50);

    QObject::connect(m_button,SIGNAL(clicked()),qApp,SLOT(quit()));
}

MyWindow::MyWindow(int weigth,int heigth){
    setFixedSize(weigth,heigth);

    m_button = new QPushButton("biba",this);
    m_button->setFont(QFont("Comic Sans MS",14));
    m_button->setCursor(Qt::PointingHandCursor);
    m_button->move(50,50);

    QObject::connect(m_button,SIGNAL(clicked()),qApp,SLOT(quit()));
}

MyWindow::~MyWindow(){
    delete m_button;
}

void MyWindow::kangalo(){
    QPushButton *myButton;
    QGridLayout *layout = new QGridLayout();

    myButton = new QPushButton();
    myButton->setText("Go ahard");

    for(int i=0;i<5;i++){
        int my_x;
        for(my_x=0;my_x<5;my_x++){
            layout->addWidget(myButton,i,my_x);
        }
        my_x = 0;
    }
    this->setLayout(layout);
}
