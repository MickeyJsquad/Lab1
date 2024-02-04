#pragma once
#include "Token.h"
#include <iostream>
#include<sstream>
#include <cctype>
using namespace std;

class Scanner {
    private:
        string input;
        TokenType type;
        int line;

    public:
        Scanner(const string& input) : input(input) {}

        Token scanToken () {
            int initialSize = input.size();     //If whitespace is getting deleted, input.size() could change and that would throw off the for loop
            int line = 1;                       //Input begins on line 1

            for (int i = 0; i < initialSize; i++) {
                int j = 0;
                if (input.at(i) == '\n'){
                        line++;
                    }

                while (isspace(input.at(j))) {      //While loop to remove whitespace at the beginning of the file
                    if (input.at(j) = '\n'){
                        line++;
                    }
                    //cout << "Input before removal: " << input << endl;
                    //input = input.substr(1);
                    j++;
                    //cout << "Input after removal: " << input << endl;
                } 
               
                if (input.at(i) == ',') {
                    TokenType type = COMMA;
                    string value = ",";   //Change this to whatever the line variable is                    
                    return Token(type, value, line);
                }
            }
        }




    //Just putting this aside until I can figure out what the hap is fuckening
       
};