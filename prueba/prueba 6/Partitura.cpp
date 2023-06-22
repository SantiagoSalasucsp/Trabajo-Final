#include <iostream>
#include <fstream>
#include "Partitura.h"
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

Partitura::Partitura(){

}

void Partitura::tocar(){
    ifstream leer ("cancion.txt");


    for(int y=2; y<=1;y++){

    

    string x;
    getline(leer,x);

    string intermediate;

    stringstream check1(x);


    while(getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }

    }



    


}