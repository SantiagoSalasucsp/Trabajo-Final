#include <iostream>
#include <fstream>
#include "Partitura.h"
#include <string>
#include <bits/stdc++.h>

using namespace std;

Partitura::Partitura(){

}

void Partitura::tocar(){
    ifstream leer ("cancion.txt");


    fot(int y=2; y<=1;y++){

    

    string x;
    getline(leer,x);



    stringstream check1(x);


    while(getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }

    }



    


}