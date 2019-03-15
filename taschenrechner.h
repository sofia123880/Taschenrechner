#ifndef TASCHENRECHNER_H
#define TASCHENRECHNER_H

#include <QWidget>

namespace Ui {
class Taschenrechner;
}

class Taschenrechner : public QWidget
{
    Q_OBJECT

public:
    explicit Taschenrechner(QWidget *parent = nullptr);
    ~Taschenrechner();

private:
    Ui::Taschenrechner *ui;
};

#endif // TASCHENRECHNER_H
