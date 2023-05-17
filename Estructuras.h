#ifndef __ESTRUCTURAS_H__
#define __ESTRUCTURAS_H__
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Estructuras{
public:


  Estructuras(string* nota,int posi,int tama);

  void derecha(int&);
  void tono (int&);
  void semitono(int&);
  void EscalaMayor();
  void print();
  void EscalaMenor();
  void intervalos();
  void Conversor();
  void dorica();
  void frigia();
  void Cromatica();
  void lidia();
  void lidiaAumentada();
  void PentatonicaMenor();

private:

  string*ptr=new string;

  vector<string> vec;

  string*notas;
  //[]=      {"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si","Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};
  int pos;
  int tam=11;

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


};
#endif