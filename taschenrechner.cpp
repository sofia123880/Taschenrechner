#include "taschenrechner.h"
#include "ui_taschenrechner.h"
#include <QtWidgets>
#include<QPushButton>
#include <iostream>
using namespace std;

Taschenrechner::Taschenrechner(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Taschenrechner)
{
    ui->setupUi(this);

    QWidget *window = new QWidget;


    //Taste "1"
    QPushButton *Taste1 = new QPushButton("1",this);
    //Taste1->setText("1");
    Taste1->setFixedSize(50,50);
    connect(Taste1, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "2"
    QPushButton *Taste2 = new QPushButton("2",this);
    //Taste2->setText("2");
    Taste2->setFixedSize(50,50);
    connect(Taste2, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "3"
    QPushButton *Taste3 = new QPushButton;
    Taste3->setText("3");
    Taste3->setFixedSize(50,50);
    connect(Taste3, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "4"
    QPushButton *Taste4 = new QPushButton;
    Taste4->setText("4");
    Taste4->setFixedSize(50,50);
    connect(Taste4, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "5"
    QPushButton *Taste5 = new QPushButton;
    Taste5->setText("5");
    Taste5->setFixedSize(50,50);
    connect(Taste5, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "6"
    QPushButton *Taste6 = new QPushButton;
    Taste6->setText("6");
    Taste6->setFixedSize(50,50);
    connect(Taste6, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "7"
    QPushButton *Taste7 = new QPushButton;
    Taste7->setText("7");
    Taste7->setFixedSize(50,50);
    connect(Taste7, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "8"
    QPushButton *Taste8 = new QPushButton;
    Taste8->setText("8");
    Taste8->setFixedSize(50,50);
    connect(Taste8, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "9"
    QPushButton *Taste9 = new QPushButton;
    Taste9->setText("9");
    Taste9->setFixedSize(50,50);
    connect(Taste9, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "0"
    QPushButton *Taste0 = new QPushButton;
    Taste0->setText("0");
    Taste0->setFixedSize(50,50);
    connect(Taste0, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste ","
    QPushButton *Taste_komma = new QPushButton;
    Taste_komma->setText(",");
    Taste_komma->setFixedSize(50,50);
    connect(Taste_komma, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "="
    QPushButton *Taste_gleich = new QPushButton;
    Taste_gleich->setText("=");
    Taste_gleich->setFixedSize(50,50);
    connect(Taste1, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "+"
    QPushButton *Taste_plus = new QPushButton;
    Taste_plus->setText("+");
    Taste_plus->setFixedSize(50,50);
    connect(Taste_plus, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "-"
    QPushButton *Taste_minus = new QPushButton;
    Taste_minus->setText("-");
    Taste_minus->setFixedSize(50,50);
    connect(Taste_minus, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "*"
    QPushButton *Taste_mal = new QPushButton;
    Taste_mal->setText("*");
    Taste_mal->setFixedSize(50,50);
    connect(Taste_mal, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "/"
    QPushButton *Taste_geteilt = new QPushButton;
    Taste_geteilt->setText("/");
    Taste_geteilt->setFixedSize(50,50);
    connect(Taste_geteilt, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "Ans"
    QPushButton *Taste_Ans = new QPushButton;
    Taste_Ans->setText("Ans");
    Taste_Ans->setFixedSize(50,50);
    connect(Taste_Ans, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "CE"
    QPushButton *Taste_CE = new QPushButton;
    Taste_CE->setText("CE");
    Taste_CE->setFixedSize(50,50);
    connect(Taste_CE, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "^2"
    QPushButton *Taste_Quadrat = new QPushButton;
    Taste_Quadrat->setText("^2");
    Taste_Quadrat->setFixedSize(50,50);
    connect(Taste_Quadrat, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Taste "sqrt"
    QPushButton *Taste_Sqrt = new QPushButton;
    Taste_Sqrt->setText("sqrt");
    Taste_Sqrt->setFixedSize(50,50);
    connect(Taste_Sqrt, SIGNAL(clicked()), qApp, SLOT(quit()));


    QVBoxLayout *vbox = new QVBoxLayout;
   //QVBoxLayout *hbox = new QVBoxLayout;
   // QGridLayout *grid = new QGridLayout;
    vbox -> addWidget(Taste1);
    vbox -> addWidget(Taste2);

/*
    //Erste Tasterspalte
    grid -> addWidget(Taste_Sqrt,1,0);
    grid -> addWidget(Taste7,2,0);
    grid -> addWidget(Taste4,3,0);
    grid -> addWidget(Taste1,4,0);
    grid -> addWidget(Taste_komma,5,0);

    //Zweite Tasterspalte
    grid -> addWidget(Taste_Quadrat,1,1);
    grid -> addWidget(Taste8,2,1);
    grid -> addWidget(Taste5,3,1);
    grid -> addWidget(Taste2,4,1);
    grid -> addWidget(Taste0,5,1);

    //Dritte Tasterspalte
    grid -> addWidget(Taste_Ans,1,2);
    grid -> addWidget(Taste9,2,2);
    grid -> addWidget(Taste6,3,2);
    grid -> addWidget(Taste3,4,2);
    grid -> addWidget(Taste_gleich,5,2);

    //Vierte Tasterspalte
    grid -> addWidget(Taste_CE,1,3);
    grid -> addWidget(Taste_plus,2,3);
    grid -> addWidget(Taste_minus,3,3);
    grid -> addWidget(Taste_mal,4,3);
    grid -> addWidget(Taste_geteilt,5,3);
    */
    //vbox->addLayout(grid);
    //vbox->addLayout(hbox);

    window->setLayout(vbox);
    window->show();                                     //ruft das zweite Fenster auf //

}

Taschenrechner::~Taschenrechner()
{
    delete ui;
}
