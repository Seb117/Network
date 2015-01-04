#include "displayer.h"

Displayer::Displayer(QWidget *parent) :
    QMainWindow(parent)
{
}

Displayer::Displayer(displayParam& param){
    this->p = param;
}

void Displayer::displayPaquet(Paquet &p){

}

void Displayer::changeDisplayParam(displayParam &param){
    this->p = param;
}
