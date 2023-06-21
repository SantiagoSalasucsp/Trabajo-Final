# include <fstream >
#include <string>

using namespace std ;

int main () {
    string y=("Do,blanca");

    ifstream source (" partitura . txt ");
    ofstream destination ( " partitura . txt ");
    int x=2;
    source >> x; 
    source >> y;
    source . close (); 
    destination << x;
    destination <<y;
     
    return 0;
}