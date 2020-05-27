#ifndef FOND_H
#define FOND_H

#include <QDialog>
#include"dialog.h"
#include"mon1.h"
namespace Ui {
class Fond;
}

class Fond : public QDialog
{
    Q_OBJECT

public:
    explicit Fond(QWidget *parent = 0);
    ~Fond();
    void calculate();
private slots:
    void on_comboBox_3_currentIndexChanged(int index);
    void on_pushButton_1_clicked();
    void check1(bool);
    void check2(bool);

    void on_comboBox_5_currentIndexChanged(int index);

    void on_comboBox_currentIndexChanged(int index);

    void on_lineEdit_3_textEdited(const QString &arg1);

private:
    Ui::Fond *ui;
    Dialog *dialog;
    int b=25;
    bool m_check;
    mon1 *mon;
    int c=0;
};

#endif // FOND_H
