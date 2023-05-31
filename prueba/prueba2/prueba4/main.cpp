#include <iostream>
#include <vector>
#include <windows.h>
#include "Sonido.h"
#include "Do1.h"


using namespace std;



int main(){

    vector<Sonido*> vec;

    Do1 k;

    Sonido* ve1=&k;

    vec.push_back(ve1);

    ve1->getSonido();
    
}