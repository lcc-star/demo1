#include "fond.h"
#include "ui_fond.h"
#include<math.h>
#include"dialog.h"
#include<QDebug>
#include<QToolTip>
extern QString text1,text2,text3,text4;
extern QString textt1,textt2,textt3,textt4;
Fond::Fond(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fond)
{
    ui->setupUi(this);
    setFixedSize(850,600);
    connect(ui->radioButton_1,SIGNAL(clicked(bool)),this,SLOT(check1(bool)));
    connect(ui->radioButton_2,SIGNAL(clicked(bool)),this,SLOT(check2(bool)));
    connect(ui->comboBox_3,SIGNAL(activated(int)),this,SLOT(on_comboBox_3_currentIndexChanged(int)));
    connect(ui->pushButton_1,&QPushButton::clicked,this,&Fond::calculate);
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        ui->lineEdit_9->clear();
        ui->lineEdit_3->clear();
    });
}

Fond::~Fond()
{
    delete ui;
}
void Fond::on_pushButton_1_clicked()
{
    mon =new mon1(this);
    mon->setModal(false);
    dialog =new Dialog(this);
    dialog->setModal(false);
    if(m_check==true)
        dialog->show();
    else if(m_check==false)
        mon->show();
}
void Fond::calculate()
{
    if(m_check==true)
    {
        double rate=ui->lineEdit_9->text().toDouble();
        double pay=ui->lineEdit_3->text().toDouble();
        text2=QString::number(pay*10000);
        double money=(pay*10000*(rate/1200)*pow(1+rate/1200,b*12))/(pow(1+rate/1200,b*12)-1)*(b*12);
        text3=QString::number(money-pay*10000);
        text1=QString::number(money/(b*12));
        text4=QString::number(b*12);
    }
    else if(m_check==false)
    {
        double rate=ui->lineEdit_9->text().toDouble();
        double pay=ui->lineEdit_3->text().toDouble();
        textt4=QString::number(pay*10000/(b*12)*(rate/1200));
        textt1=QString::number(pay*10000/(b*12)+pay*10000*(rate/1200));
        textt3=QString::number((b*12+1)*pay*10000*(rate/1200)/2);
        textt2=QString::number(pay*10000);

    }
}

void Fond::on_comboBox_3_currentIndexChanged(int index)
{
    if(index==0) b=25;
    else if(index==1) b=24;
    else if(index==2) b=23;
    else if(index==3) b=22;
    else if(index==4) b=21;
    else if(index==5) b=20;
    else if(index==6) b=19;
    else if(index==7) b=18;
    else if(index==8) b=17;
    else if(index==9) b=16;
    else if(index==10) b=15;
    else if(index==11) b=14;
    else if(index==12) b=13;
    else if(index==13) b=12;
    else if(index==14) b=11;
    else if(index==15) b=10;
    else if(index==16) b=9;
    else if(index==17) b=8;
    else if(index==18) b=7;
    else if(index==19) b=6;
    else if(index==20) b=5;
    else if(index==21) b=4;
    else if(index==22) b=3;
    else if(index==23) b=2;
    else if(index==24) b=1;
}
void Fond::check1(bool)
{
    m_check = true;
}
void Fond::check2(bool)
{
    m_check = false;
}

void Fond::on_comboBox_5_currentIndexChanged(int index)
{
    if(c==0)
     {
       if(index==0) ui->lineEdit_9->setText(QString::number(4.75));
       if(index==1) ui->lineEdit_9->setText(QString::number(4.85));
       if(index==2) ui->lineEdit_9->setText(QString::number(5.39));
       if(index==3) ui->lineEdit_9->setText(QString::number(5.15));
       if(index==4) ui->lineEdit_9->setText(QString::number(4.17));
       if(index==5) ui->lineEdit_9->setText(QString::number(3.43));
       if(index==6) ui->lineEdit_9->setText(QString::number(4.9));
       if(index==7) ui->lineEdit_9->setText(QString::number(5.67));
       if(index==8) ui->lineEdit_9->setText(QString::number(4.38));
       if(index==9) ui->lineEdit_9->setText(QString::number(3.61));
       if(index==10) ui->lineEdit_9->setText(QString::number(5.15));
       if(index==11) ui->lineEdit_9->setText(QString::number(5.94));
       if(index==12) ui->lineEdit_9->setText(QString::number(4.59));
       if(index==13) ui->lineEdit_9->setText(QString::number(3.78));
       if(index==14) ui->lineEdit_9->setText(QString::number(5.4));
       if(index==15) ui->lineEdit_9->setText(QString::number(6.22));
       if(index==16) ui->lineEdit_9->setText(QString::number(4.8));
       if(index==17) ui->lineEdit_9->setText(QString::number(3.96));
       if(index==18) ui->lineEdit_9->setText(QString::number(5.65));
       if(index==19) ui->lineEdit_9->setText(QString::number(6.49));
       if(index==20) ui->lineEdit_9->setText(QString::number(5.01));
       if(index==21) ui->lineEdit_9->setText(QString::number(4.13));
       if(index==22) ui->lineEdit_9->setText(QString::number(5.9));
       if(index==23) ui->lineEdit_9->setText(QString::number(6.7));
       if(index==24) ui->lineEdit_9->setText(QString::number(5.2));
       if(index==25) ui->lineEdit_9->setText(QString::number(4.3));
       if(index==26) ui->lineEdit_9->setText(QString::number(6.15));
       if(index==27) ui->lineEdit_9->setText(QString::number(7.21));
       if(index==28) ui->lineEdit_9->setText(QString::number(5.57));
       if(index==29) ui->lineEdit_9->setText(QString::number(4.59));
       if(index==30) ui->lineEdit_9->setText(QString::number(6.55));
       if(index==31) ui->lineEdit_9->setText(QString::number(7.48));
       if(index==32) ui->lineEdit_9->setText(QString::number(5.78));
       if(index==33) ui->lineEdit_9->setText(QString::number(4.76));
       if(index==34) ui->lineEdit_9->setText(QString::number(6.8));
     }
    else if(c==1)
    {
        if(index==0) ui->lineEdit_9->setText(QString::number(3.25));
        if(index==1) ui->lineEdit_9->setText(QString::number(3.25));
        if(index==2) ui->lineEdit_9->setText(QString::number(3.57));
        if(index==3) ui->lineEdit_9->setText(QString::number(3.41));
        if(index==4) ui->lineEdit_9->setText(QString::number(2.76));
        if(index==5) ui->lineEdit_9->setText(QString::number(2.28));
        if(index==6) ui->lineEdit_9->setText(QString::number(3.25));
        if(index==7) ui->lineEdit_9->setText(QString::number(3.57));
        if(index==8) ui->lineEdit_9->setText(QString::number(2.76));
        if(index==9) ui->lineEdit_9->setText(QString::number(2.28));
        if(index==10) ui->lineEdit_9->setText(QString::number(3.25));
        if(index==11) ui->lineEdit_9->setText(QString::number(3.85));
        if(index==12) ui->lineEdit_9->setText(QString::number(2.98));
        if(index==13) ui->lineEdit_9->setText(QString::number(2.45));
        if(index==14) ui->lineEdit_9->setText(QString::number(3.5));
        if(index==15) ui->lineEdit_9->setText(QString::number(4.13));
        if(index==16) ui->lineEdit_9->setText(QString::number(3.19));
        if(index==17) ui->lineEdit_9->setText(QString::number(2.63));
        if(index==18) ui->lineEdit_9->setText(QString::number(3.75));
        if(index==19) ui->lineEdit_9->setText(QString::number(4.4));
        if(index==20) ui->lineEdit_9->setText(QString::number(3.4));
        if(index==21) ui->lineEdit_9->setText(QString::number(2.8));
        if(index==22) ui->lineEdit_9->setText(QString::number(4.0));
        if(index==23) ui->lineEdit_9->setText(QString::number(4.25));
        if(index==24) ui->lineEdit_9->setText(QString::number(4.25));
        if(index==25) ui->lineEdit_9->setText(QString::number(4.25));
        if(index==26) ui->lineEdit_9->setText(QString::number(4.25));
        if(index==27) ui->lineEdit_9->setText(QString::number(4.5));
        if(index==28) ui->lineEdit_9->setText(QString::number(4.5));
        if(index==29) ui->lineEdit_9->setText(QString::number(4.5));
        if(index==30) ui->lineEdit_9->setText(QString::number(4.5));
        if(index==31) ui->lineEdit_9->setText(QString::number(4.7));
        if(index==32) ui->lineEdit_9->setText(QString::number(4.7));
        if(index==33) ui->lineEdit_9->setText(QString::number(4.7));
        if(index==34) ui->lineEdit_9->setText(QString::number(4.7));
    }
}

void Fond::on_comboBox_currentIndexChanged(int index)
{
    if(index==0)
    {
        c=0;
        ui->lineEdit_9->setText(QString::number(4.75));
            qDebug()<<c;
    }
    if(index==1)
    {
        c=1;
        ui->lineEdit_9->setText(QString::number(3.25));
            qDebug()<<c;
    }
}

void Fond::on_lineEdit_3_textEdited(const QString &arg1)
{
    ui->lineEdit_3->setValidator(new QDoubleValidator(0,10000, 2));
    if(arg1.toDouble() < 0 || arg1.toDouble() > 10000)
        {
            QToolTip::showText(ui->lineEdit_3->mapToGlobal(QPoint(100, 0)),"范围应该是0-10000");
            ui->lineEdit_3->setStyleSheet("QLineEdit{border:1px solid red }");
        }
        else
        {
            ui->lineEdit_3->setStyleSheet("QLineEdit{border:1px solid gray border-radius:1px}");
        }
}
