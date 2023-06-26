#ifndef NOTA_H
#define NOTA_H
#include <iostream>
#include <windows.h>


class Nota{

    public:
        Nota(int,int=1400);

        void getsonido();

    private:
        int tono;
        int figura;



};




#endif