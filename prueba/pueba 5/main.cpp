#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>


// link: https://www.geeksforgeeks.org/tokenizing-a-string-cpp/

using namespace std;


int main(){

    ifstream leer("no.txt");

    string line = "funciona,este,codigo";

    vector <string> tokens;

    stringstream check1(leer);


    string intermediate;


    while(getline(check1, intermediate, ','))
    {
        tokens.push_back(intermediate);
    }


    for(int i = 0; i < tokens.size(); i++)
        cout << tokens[i] << '\n';






}