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
        TokenType type;
        string value;
        int line;

    public:
        Token(TokenType type, string value, int line){
            this->type = type;
            this->value = value;
            this->line = line;
        }

        string toString() const {
            string typeName;
            if (type == 0) {
                typeName = "COMMA";
            }
            stringstream out;
            out << "(" << typeName << "," << "\"" << value << "\"" << line << ")";      //Create a token name function, which will convert the enum number to a string
            return out.str();
    }

};


