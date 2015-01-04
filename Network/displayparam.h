#ifndef DISPLAYPARAM_H
#define DISPLAYPARAM_H

#include <QMainWindow>
#include <string>
#include <iostream>

typedef enum typePrint{
    TEXT = 0,
    HEXA
}Print;

enum protocolType{
    UDP = 0,
    TCP
};

enum ipType{
    IPV4 = 0,
    IPV6
};

class displayParam : public QMainWindow
{
public:
    explicit displayParam(QWidget *parent = 0);
    Print contentDisplay();
    std::string logFile();

signals:

public slots:

public:
    std::string    source;
    std::string    destination;
    int            size;
    protocolType   protocol;
    ipType         ip;
};

#endif // DISPLAYPARAM_H
