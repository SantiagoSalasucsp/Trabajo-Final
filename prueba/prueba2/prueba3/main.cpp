#include <iostream>
#include <vector>
#include <windows.h>


using namespace std;



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



int main(){

    vector<Sonido*> vec;

    Do1 k;

    Sonido* ve1=&k;

    vec.push_back(ve1);

    ve1->getSonido();
    
}