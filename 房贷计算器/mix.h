#ifndef MIX_H
#define MIX_H

#include <QDialog>
#include"dialog.h"
#include"mon1.h"

namespace Ui {
class Mix;
}

class Mix : public QDialog
{
    Q_OBJECT

public:
    explicit Mix(QWidget *parent = 0);
    ~Mix();
    void calculate();
private slots:
    void on_comboBox_3_currentIndexChanged(int index);
    void on_pushButton_1_clicked();
    void check1(bool);
    void check2(bool);

    void on_comboBox_1_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_lineEdit_1_textEdited(const QString &arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

private:
    Ui::Mix *ui;
    Dialog *dialog;
    int b=25;
    bool m_check;
    mon1 *mon;
};

#endif // MIX_H
