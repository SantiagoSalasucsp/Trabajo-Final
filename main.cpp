#include <iostream>
#include <string>
#include <vector>
#include "Estructuras.h"
#include "Transformar.h"

using namespace std;

int main() {
  int z;
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
  //vector<string>array={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};
//string notas[]={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si","Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};
 string notas[]={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};
//EscalaMayor(notas,7);
//cout<<endl;
//EscalaMenor(notas,4);
string* nota;
nota=&notas[0];

Estructuras L(notas,Mi,11);
Estructuras D(notas,Sol,11);  //objetos de la clase estructura
Estructuras j(notas,Do,11);

//Transformador p(Sib);

//L.EscalaMenor();
//D.EscalaMayor();
//j.Cromatica();


/*Transformador r3(notas,Sib,Fa);
r3.Transformar();*/

Transformador r4(notas, Do, Fa);

r4.Transformar(); // función de la clase transformador 








}
