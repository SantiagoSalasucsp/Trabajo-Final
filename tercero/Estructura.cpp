#include <iostream>
#include "Estructura.h"
#include <string> 

using namespace std;






Estructuras::Estructuras(string* notas,int tam){
    this->notas=notas;
    this->tam=tam;

    Do=0;
    Reb=1;
    Re=2;
    Mib=3;
    Mi=4;
    Fa=5;
    Solb=6;
    Sol=7;
    Lab=8;
    La=9;
    Sib=10;
    Si=11;
    
}


/*void Estructuras::print(){
  cout<<"Hola"<<endl;
}
*/

void Estructuras::tono(int &x){
   x+=2;
  
}
void Estructuras::semitono(int &y){
   y+=1;
}

void Estructuras::derecha(int &x){
      if((x+1)==12)
        x=-1;
      if((x+2)==12)
        x=-2;
      if((x+2)==13)
        x=-2;
}


