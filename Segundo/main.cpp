#include <iostream>
#include "EscalaMayor.h"
#include "Estructura.h"
#include <string>
#include <vector>
#include <windows.h>



class Sonido {
  protected:
    
  public:
    
    virtual void getSonido (void) =0;
    
};

class Do1: public Sonido {
  public:
     
    void getSonido(){
       Beep(523,700); 
      }
};







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

    EscalaMayor Do_(nota,Do);
    Do_.Print();

}