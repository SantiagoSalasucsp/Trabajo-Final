#include <iostream>
#include <string>
#include "Estructuras.h"
using namespace std;


Estructuras::Estructuras(string* notas,int pos,int tam){
  this->notas=notas;
  this->pos=pos;
  this->tam=tam;
}

void Estructuras::tono(int &x){
   x+=2;
  
}
void Estructuras::semitono(int &y){
   y+=1;
}


void Estructuras::print() {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        cout << notas[i] << " ";
    cout << "]" <<endl;
}
void Estructuras::EscalaMayor(){
  int k=pos;
  cout<<"___Escala Mayor___"<<endl;
  cout<<notas[k]<<endl;

  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  semitono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  semitono(k);
  cout<<notas[pos]<<endl;
  
  cout<<"__________________"<<endl;

};


void Estructuras::EscalaMenor(){
  int k=pos;
  cout<<"___Escala Menor___"<<endl;
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  semitono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  semitono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[pos]<<endl;
  cout<<"__________________"<<endl;

  }



void Estructuras::frigia(){
  int k=pos;
  cout<<notas[k]<<endl;
  derecha(k);
  semitono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  semitono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[pos]<<endl;
}

void Estructuras::lidia(){
  int k=pos;
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  semitono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  semitono(k);
  cout<<notas[pos]<<endl;
}

void Estructuras::lidiaAumentada(){
  int k=pos;
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  semitono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  derecha(k);
  semitono(k);
  cout<<notas[pos]<<endl;

}

void Estructuras::derecha(int &x){
      if((x+1)==12)
        x=-1;
      if((x+2)==12)
        x=-2;
      if((x+2)==13)
        x=-2;
}


  


void Estructuras::Cromatica(){
for(int i=0;i<=12;i++)
  cout<<notas[i];}

