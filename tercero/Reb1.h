#ifndef REB1__H
#define REB1__H

#include <iostream>
#include "Sonido.h"
#include <windows.h>


class Reb1: public Sonido{

    Reb1();
     
    void getSonido() override{
       Beep(554,700); 
      }




};



#endif