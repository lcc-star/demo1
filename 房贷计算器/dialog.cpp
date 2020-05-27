#include "dialog.h"
#include "ui_dialog.h"
#include<QString>
#include<QDebug>
#include<QPushButton>
QString text1,text2,text3,text4;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setFixedSize(850,600);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
       ui->lineEdit_1->setText(text1);
       ui->lineEdit_2->setText(text2);
       ui->lineEdit_3->setText(text3);
       ui->lineEdit_4->setText(text4);
    });
}
Dialog::~Dialog()
{
    delete ui;
}

