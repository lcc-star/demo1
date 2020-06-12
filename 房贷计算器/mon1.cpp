#include "mon1.h"
#include "ui_mon1.h"
#include<QString>
#include<QPushButton>
QString textt1,textt2,textt3,textt4;
mon1::mon1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mon1)
{
    ui->setupUi(this);
        setFixedSize(850,600);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
       ui->lineEdit_1->setText(textt1);
       ui->lineEdit_2->setText(textt2);
       ui->lineEdit_3->setText(textt3);
       ui->lineEdit_4->setText(textt4);
    });

}

mon1::~mon1()
{
    delete ui;
}
