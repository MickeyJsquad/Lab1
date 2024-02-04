#include "Token.h"
#include "Scanner.h"
#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {        //Gonna have to add argc and argv so it can take input from a file
    Scanner s = Scanner(argv[0]);
    Token t = s.scanToken();
    cout << t.toString() << endl;
}