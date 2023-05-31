#ifndef SONIDO__H
#define sONIDO__H

#include <iostream>
#include <windows.h>
#include <vector>




class Sonido {

    public:
    virtual void getSonido() const =0;
    void print();



};


#endif