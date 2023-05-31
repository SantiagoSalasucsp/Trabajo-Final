#ifndef DO1_H
#define DO1_H

#include "Sonido.h"
#include <iostream>


class Do1: public Sonido {
  public:
     
    void getSonido(){
       Beep(523,700); 
      }
};





#endif