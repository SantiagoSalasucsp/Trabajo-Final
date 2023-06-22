#ifndef PARTITURA_H
#define PARTITURA_H

#include <iostream>
#include <vector>
#include <fstream>

class Partitura{


    public:
    Partitura();

    void tocar();

    private:

    int Do=0;
    int Reb=1;
    int Re=2;
    int Mib=3;
    int Mi=4;
    int Fa=5;
    int Solb=6;
    int Sol=7;
    int Lab=8;
    int La=9;
    int Sib=10;
    int Si=11;


    int blanca=1400;
    int negra =700;
    int corchea =350;



};


#endif