#include <fstream>
#include <string>

using namespace std ;

int main () {
    string y=("Do,blanca");

    ifstream source ("archivo1.txt");
    ofstream destination ( "archivo2.txt");

    int x;

    source >> x; 
    //source >> y;
    
    source.close (); 
    destination << x << '\n';

    destination << x;
    //destination <<y;
     
    return 0;
}