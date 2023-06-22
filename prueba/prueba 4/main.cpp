#include <fstream>
#include <iostream>
#include <string> 
using namespace std ;

int main () {
 

    ifstream leer ("archivo3.txt");
    ofstream escribir ( "archivo2.txt");

    //int x;
    string y;
    string x;
    
    getline(leer,y);
    getline(leer,x);
    //leer >> y;

    //cout<<y;
    
    leer.close (); 
    escribir << y << '\n';
    escribir<<x<<endl;

    //escribir << y;

    cout<<y;
    cout<<x;

     
    return 0;
}