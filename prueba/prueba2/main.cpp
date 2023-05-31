#include <iostream>

#include "Do1.h"
#include <windows.h>
#include <vector>

using namespace std;


int main(){

    Do1 k;

    Sonido * p1=&k;



    vector<Sonido*> vec;

    vec.push_back(p1);

    p1->getSonido();
    //k.getSonido();




    
}