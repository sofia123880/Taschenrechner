#include "taschenrechner.h"
#include "ui_taschenrechner.h"

Taschenrechner::Taschenrechner(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Taschenrechner)
{
    ui->setupUi(this);
}

Taschenrechner::~Taschenrechner()
{
    delete ui;
}
