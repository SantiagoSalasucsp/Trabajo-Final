#ifndef __ESCALAMAYOR_H__
#define __ESCALAMAYOR_H__


#include <iostream>
#include "Estructura.h"


class EscalaMayor : public Estructuras {

    public:
        EscalaMayor(string*, int=12, int=0);

        virtual void print() override;

       
    

    private:
        int pos;



};

#endif


