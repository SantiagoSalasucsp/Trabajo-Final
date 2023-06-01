#include "Estructura.h"
#include "EscalaMayor.h"
#include <iostream>
#include <windows.h>
#include "Sonido.h"
#include "Do1.h"
#include "Re1.h"
#include <vector>


using namespace std;









int main(){




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


    string nota[12]={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};


    EscalaMayor Do_(nota,12,Do);


    Do_.print();



    Do1 f;
    Re1 g;
    

    Sonido*pun12=&g;
    Sonido*pun11=&f;

    f.getSonido();
    pun11->getSonido();

    vector<Sonido*> vec;

    vec.push_back(pun11);
    vec.push_back(pun12);

    for(int x=0;x<=1;x++){

    vec[x]->getSonido();
    }

    










}