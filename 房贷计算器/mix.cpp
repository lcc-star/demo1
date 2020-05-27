#include "mix.h"
#include "ui_mix.h"
#include"dialog.h"
#include"mon1.h"
#include<math.h>
#include<QDebug>
#include<QToolTip>
extern QString text1,text2,text3,text4;
extern QString textt1,textt2,textt3,textt4;
Mix::Mix(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mix)
{
    ui->setupUi(this);
        setFixedSize(850,600);
    connect(ui->radioButton_1,SIGNAL(clicked(bool)),this,SLOT(check1(bool)));
    connect(ui->radioButton_2,SIGNAL(clicked(bool)),this,SLOT(check2(bool)));
    connect(ui->comboBox_3,SIGNAL(activated(int)),this,SLOT(on_comboBox_3_currentIndexChanged(int)));
    connect(ui->pushButton_1,&QPushButton::clicked,this,&Mix::calculate);
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        ui->lineEdit_1->clear();
        ui->lineEdit_9->clear();
        ui->lineEdit_3->clear();
        ui->lineEdit_8->clear();
    });

}

Mix::~Mix()
{
    delete ui;
}
void Mix::on_pushButton_1_clicked()
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
void Mix::calculate()
{
    if(m_check==true)
    {
        double rate1=ui->lineEdit_9->text().toDouble();
        double pay1=ui->lineEdit_1->text().toDouble();
        double rate2=ui->lineEdit_8->text().toDouble();
        double pay2=ui->lineEdit_3->text().toDouble();
        text2=QString::number((pay1+pay2)*10000);
        double money1=(pay1*10000*(rate1/1200)*pow(1+rate1/1200,b*12))/(pow(1+rate1/1200,b*12)-1)*(b*12);
        double money2=(pay2*10000*(rate2/1200)*pow(1+rate2/1200,b*12))/(pow(1+rate2/1200,b*12)-1)*(b*12);
        text3=QString::number((money1+money2)-(pay1+pay2)*10000);
        text1=QString::number((money1+money2)/(b*12));
        text4=QString::number(b*12);
    }
    else if(m_check==false)
    {
        double rate1=ui->lineEdit_9->text().toDouble();
        double pay1=ui->lineEdit_1->text().toDouble();
        double rate2=ui->lineEdit_8->text().toDouble();
        double pay2=ui->lineEdit_3->text().toDouble();
        textt4=QString::number(pay1*10000/(b*12)*(rate1/1200)+pay2*10000/(b*12)*(rate2/1200));
        textt1=QString::number(pay1*10000/(b*12)+pay1*10000*(rate1/1200)+pay2*10000/(b*12)+pay2*10000*(rate2/1200));
        textt3=QString::number((b*12+1)*pay1*10000*(rate1/1200)/2+(b*12+1)*pay2*10000*(rate2/1200)/2);
        textt2=QString::number((pay1+pay2)*10000);
    }
}
void Mix::on_comboBox_3_currentIndexChanged(int index)
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
void Mix::check1(bool)
{
    m_check = true;
}
void Mix::check2(bool)
{
    m_check = false;
}


void Mix::on_comboBox_1_currentIndexChanged(int index)
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


void Mix::on_comboBox_2_currentIndexChanged(int index)
{
    if(index==0) ui->lineEdit_8->setText(QString::number(3.25));
    if(index==1) ui->lineEdit_8->setText(QString::number(3.25));
    if(index==2) ui->lineEdit_8->setText(QString::number(3.57));
    if(index==3) ui->lineEdit_8->setText(QString::number(3.41));
    if(index==4) ui->lineEdit_8->setText(QString::number(2.76));
    if(index==5) ui->lineEdit_8->setText(QString::number(2.28));
    if(index==6) ui->lineEdit_8->setText(QString::number(3.25));
    if(index==7) ui->lineEdit_8->setText(QString::number(3.57));
    if(index==8) ui->lineEdit_8->setText(QString::number(2.76));
    if(index==9) ui->lineEdit_8->setText(QString::number(2.28));
    if(index==10) ui->lineEdit_8->setText(QString::number(3.25));
    if(index==11) ui->lineEdit_8->setText(QString::number(3.85));
    if(index==12) ui->lineEdit_8->setText(QString::number(2.98));
    if(index==13) ui->lineEdit_8->setText(QString::number(2.45));
    if(index==14) ui->lineEdit_8->setText(QString::number(3.5));
    if(index==15) ui->lineEdit_8->setText(QString::number(4.13));
    if(index==16) ui->lineEdit_8->setText(QString::number(3.19));
    if(index==17) ui->lineEdit_8->setText(QString::number(2.63));
    if(index==18) ui->lineEdit_8->setText(QString::number(3.75));
    if(index==19) ui->lineEdit_8->setText(QString::number(4.4));
    if(index==20) ui->lineEdit_8->setText(QString::number(3.4));
    if(index==21) ui->lineEdit_8->setText(QString::number(2.8));
    if(index==22) ui->lineEdit_8->setText(QString::number(4.0));
    if(index==23) ui->lineEdit_8->setText(QString::number(4.25));
    if(index==24) ui->lineEdit_8->setText(QString::number(4.25));
    if(index==25) ui->lineEdit_8->setText(QString::number(4.25));
    if(index==26) ui->lineEdit_8->setText(QString::number(4.25));
    if(index==27) ui->lineEdit_8->setText(QString::number(4.5));
    if(index==28) ui->lineEdit_8->setText(QString::number(4.5));
    if(index==29) ui->lineEdit_8->setText(QString::number(4.5));
    if(index==30) ui->lineEdit_8->setText(QString::number(4.5));
    if(index==31) ui->lineEdit_8->setText(QString::number(4.7));
    if(index==32) ui->lineEdit_8->setText(QString::number(4.7));
    if(index==33) ui->lineEdit_8->setText(QString::number(4.7));
    if(index==34) ui->lineEdit_8->setText(QString::number(4.7));
}

void Mix::on_lineEdit_1_textEdited(const QString &arg1)
{
    ui->lineEdit_1->setValidator(new QDoubleValidator(0,10000, 2));
    if(arg1.toDouble() < 0 || arg1.toDouble() > 10000)
        {
            QToolTip::showText(ui->lineEdit_1->mapToGlobal(QPoint(100, 0)),"范围应该是0-10000");
            ui->lineEdit_1->setStyleSheet("QLineEdit{border:1px solid red }");
        }
        else
        {
            ui->lineEdit_1->setStyleSheet("QLineEdit{border:1px solid gray border-radius:1px}");
        }
}

void Mix::on_lineEdit_3_textEdited(const QString &arg1)
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
