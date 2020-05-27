#ifndef MON1_H
#define MON1_H

#include <QDialog>

namespace Ui {
class mon1;
}

class mon1 : public QDialog
{
    Q_OBJECT

public:
    explicit mon1(QWidget *parent = 0);
    ~mon1();

private:
    Ui::mon1 *ui;
};

#endif // MON1_H
