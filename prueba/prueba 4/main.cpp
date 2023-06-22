#include <fstream>
#include <iostream>
#include <string> 
using namespace std ;

int main () {
 

    ifstream leer ("archivo3.txt");
    ofstream escribir ( "archivo2.txt");

    //int x;
    string y;
    
    getline(leer,y);
    //leer >> y;


    
    leer.close (); 
    escribir << y << '\n';

    //escribir << y;

    cout<<y;

     
    return 0;
}