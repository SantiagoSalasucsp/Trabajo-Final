#include <iostream>
#include <fstream>
#include "Partitura.h"
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

Partitura::Partitura(){


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

void Partitura::tocar(){

    for(int u=0; u<=tokens.size();u++){
        cout<<tokens[u]<<endl;
    }



    


    }

  



    


