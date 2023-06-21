#include <iostream>
#include <fstream>

using namespace std;

int main(){



ifstream source("trabajo1.txt");
ofstream destination ("trabajo1.txt ");
int x;

source >> x;
source.close();
destination<<x;


}