#include <iostream>
#include <fstream>

using namespace std;

int main(){



ifstream source("source-trabajo1.txt");
ofstream destination ("dest-trabajo1.txt ");
int x;

source >> x;
source.close();
destination<<x;


}