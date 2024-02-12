#include "Token.h"
#include "Scanner.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {        //Gonna have to add argc and argv so it can take input from a file

    ifstream myfile(argv[1]);
    string fileContent, line;
    while (getline(myfile, line)) {
        fileContent += line + '\n';
    }
    myfile.close();
    Scanner s = Scanner(fileContent);
    Token t = s.scanToken();
    cout << t.toString() << endl;
}