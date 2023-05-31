#ifndef DO1__H
#define DO1__H
#include "Sonido.h"
#include <windows.h>
#include <iostream>

class Do1:public Sonido{

    public:

    Do1();
     
    void getSonido() override{
       Beep(523,700); 
      }


};




#endif
