#pragma once
#include <iostream>
#include <sstream>
using namespace std;

enum TokenType {
    COMMA, PERIOD, Q_MARK, LEFT_PAREN, RIGHT_PAREN, COLON, COLON_DASH,
    MULTIPLY, ADD, SCHEMES, FACTS, RULES, QUERIES, ID, STRING, COMMENT,
    UNDEFINED, EOFILE
};

class Token {
    private:
        TokenType typeValue;
        string valueName;
        int lineNum;

    public:
        Token(TokenType type, string value, int line){
            typeValue = type;
            valueName = value;
            lineNum = line;
        }

        string toString() const {
            string typeName;
            if (typeValue == 0) {
                typeName = "COMMA";
            }
            stringstream out;
            out << "(" << typeName << "," << "\"" << valueName << "\"" << lineNum << ")";      //Create a token name function, which will convert the enum number to a string
            return out.str();
    }

};


