#ifndef DISPLAYER_H
#define DISPLAYER_H

#include <QMainWindow>
#include "displayparam.h"
#include "paquet.h"

class Displayer : public QMainWindow
{
    Q_OBJECT
public:
    explicit Displayer(QWidget *parent = 0);
    explicit Displayer(displayParam&);
    void displayPaquet(Paquet&);
    void changeDisplayParam(displayParam&);
signals:

public slots:

private:
    displayParam* p;
};

#endif // DISPLAYER_H
