#include <iostream>
#include <fstream>
#include "Partitura.h"
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

Partitura::Partitura(){
    int y;

    ifstream leer ("cancion.txt");

    while(y<=1){


    

        //ifstream leer ("cancion.txt");

        string x;
        getline(leer,x);

        string intermediate;
        stringstream check1(x);
            
        while(getline(check1, intermediate, ' '))
        {
            tokens.push_back(intermediate);
        }
    y++;

        
    }
    leer.close ();
}


void Partitura::tocar(){

    for(int u=0; u<=tokens.size();u++){
        cout<<tokens[u]<<endl;
    }



    


    }

  



    


