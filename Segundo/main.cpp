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

class Reb1: public Sonido {
  public:
    void getSonido(){
      Beep(554,700);
    }
};

class Re1: public Sonido {
  public:
    void getSonido(){
      Beep(587,700);
    }
};

class Mib1: public Sonido {
  public:
    void getSonido(){
      Beep(622,700);
    }
};

class Mi1: public Sonido {
  public:
    void getSonido(){
      Beep(659,700);
    }
};

class Fa1: public Sonido {
  public:
    void getSonido(){
      Beep(698,700);
    }
};

class Solb1: public Sonido {
  public:
    void getSonido(){
      Beep(739,3000);
    }
};

class Sol1: public Sonido {
  public:
    void getSonido(){
      Beep(783,700);
    }
};

class Lab1: public Sonido {
  public:
    void getSonido(){
      Beep(830,3000);
    }
};

class La1: public Sonido {
  public:
    void getSonido(){
      Beep(880,700);
    }
};

class Sib1: public Sonido {
  public:
    void getSonido(){
      Beep(932,3000);
    }
};

class Si1: public Sonido {
  public:
    void getSonido(){
      Beep(987,700);
    }
};









class Do2: public Sonido {
  public:
     
    void getSonido(){
       Beep(1046,700); 
      }
};

class Reb2: public Sonido {
  public:
    void getSonido(){
      Beep(1108,700);
    }
};

class Re2: public Sonido {
  public:
    void getSonido(){
      Beep(1174,700);
    }
};

class Mib2: public Sonido {
  public:
    void getSonido(){
      Beep(!244,700);
    }
};

class Mi2: public Sonido {
  public:
    void getSonido(){
      Beep(1318,700);
    }
};

class Fa2: public Sonido {
  public:
    void getSonido(){
      Beep(1396,700);
    }
};

class Solb2: public Sonido {
  public:
    void getSonido(){
      Beep(1479,700);
    }
};

class Sol2: public Sonido {
  public:
    void getSonido(){
      Beep(1567,700);
    }
};

class Lab2: public Sonido {
  public:
    void getSonido(){
      Beep(1661,700);
    }
};

class La2: public Sonido {
  public:
    void getSonido(){
      Beep(1760,700);
    }
};

class Sib2: public Sonido {
  public:
    void getSonido(){
      Beep(1854,700);
    }
};

class Si2: public Sonido {
  public:
    void getSonido(){
      Beep(1975,700);
    }
};

class Do3: public Sonido {
  public:
    void getSonido(){
      Beep(2093,700);
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

    //EscalaMayor Do_(nota,Do);
    //Do_.Print();



    Do1 Do1;
    Reb1 Reb1;
    Re1 Re1;
    Mib1 Mib1;
    Mi1 Mi1;
    Fa1 Fa1;
    Solb1 Solb1;
    Sol1 Sol1;
    Lab1 Lab1;
    La1 La1;
    Sib1 Sib1;
    Si1 Si1;






    Do2 Do2;
    Reb2 Reb2;
    Re2 Re2;
    Mib2 Mib2;
    Mi2 Mi2;
    Fa2 Fa2;
    Solb2 Solb2;
    Sol2 Sol2;
    Lab2 Lab2;
    La2 La2;
    Sib2 Sib2;
    Si2 Si2;




    Sonido*pun11=&Do2;
    Sonido*pun12=&Reb2; 
    Sonido*pun13=&Re2; 
    Sonido*pun14=&Mib2; 
    Sonido*pun15=&Mi2;
    Sonido*pun16=&Fa2; 
    Sonido*pun17=&Solb2; 
    Sonido*pun18=&Sol2; 
    Sonido*pun19=&Lab2; 
    Sonido*pun20=&La2;
    Sonido*pun21=&Sib2; 
    Sonido*pun22=&Si2;



    

    Sonido*pun23=&Do2;
    Sonido*pun24=&Reb2; 
    Sonido*pun25=&Re2; 
    Sonido*pun26=&Mib2; 
    Sonido*pun27=&Mi2;
    Sonido*pun28=&Fa2; 
    Sonido*pun29=&Solb2; 
    Sonido*pun30=&Sol2; 
    Sonido*pun31=&Lab2; 
    Sonido*pun32=&La2;
    Sonido*pun33=&Sib2; 
    Sonido*pun34=&Si2;





    vector<Sonido*> vec;

    vec.push_back(pun11);
    vec.push_back(pun12);
    vec.push_back(pun13);
    vec.push_back(pun14);
    vec.push_back(pun15);
    vec.push_back(pun17);
    vec.push_back(pun18);
    vec.push_back(pun19);
    vec.push_back(pun20);
    vec.push_back(pun21);
    vec.push_back(pun22);
    vec.push_back(pun23);
    vec.push_back(pun14);
    vec.push_back(pun25);
    vec.push_back(pun26);
    vec.push_back(pun27);
    vec.push_back(pun28);
    vec.push_back(pun29);
    vec.push_back(pun30);
    vec.push_back(pun31);
    vec.push_back(pun32);
    vec.push_back(pun33);
    vec.push_back(pun34);





    
    
}