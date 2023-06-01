#ifndef RE1__H
#define RE1__H

#include "Sonido.h"
#include <iostream>
#include <windows.h>


class Re1: public Sonido{

public:

    Re1();
     
    void getSonido() override{
       Beep(587,700); 
      }




};



#endif