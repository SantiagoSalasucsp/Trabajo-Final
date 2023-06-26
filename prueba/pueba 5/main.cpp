#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>


// link: https://www.geeksforgeeks.org/tokenizing-a-string-cpp/

using namespace std;


int main(){



    string line = "GeeksForGeeks is a must try";
     
    // Vector of string to save tokens
    vector <string> tokens;
     
    // stringstream class check1
    stringstream check1(line);
     
    string intermediate;
     
    // Tokenizing w.r.t. space ' '
    while(getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }
     
    // Printing the token vector
    for(int i = 0; i < tokens.size(); i++)
        cout << tokens[i] << '\n';
}

    






