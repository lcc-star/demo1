#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"dialog.h"
#include<QString>
#include"fond.h"
#include"mix.h"
#include<QComboBox>
#include"mon1.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void calculate();
    void setPrice();
    void setArea();
    double getPrice();
    double getArea();

private slots:
    void on_pushButton_7_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_14_currentIndexChanged(int index);

    void on_comboBox_15_currentIndexChanged(int index);

    void on_comboBox_16_currentIndexChanged(int index);

    void check1(bool);

    void check2(bool);

    void on_comboBox_17_currentIndexChanged(int index);

    void on_lineEdit_8_textEdited(const QString &arg1);

private:
    Ui::Widget *ui;
    Dialog *dialog;
    Fond *fond;
    Mix *mix;
    mon1 *mon;
    double Price,Area;
    double a=0.65;
    int b=25,c=0;//**期
    Widget *p;
    bool m_check=false;


};

#endif // WIDGET_H
