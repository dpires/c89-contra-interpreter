#include <string.h>

#include "tokentype.h"

char *
TokenTypeString(int tokenType)
{
    char *strings[] = {
        "ADD_TOKEN",
        "SUBTRACT_TOKEN",
        "MULTIPLY_TOKEN",
        "DIVIDE_TOKEN",
        "LESS_TOKEN",
        "GREATER_TOKEN",
        "EQUAL_TOKEN",
        "NOT_EQUAL_TOKEN",
        "LESS_EQUAL_TOKEN",
        "GREATER_EQUAL_TOKEN",
        "OR_TOKEN",
        "AND_TOKEN",
        "NOT_TOKEN",
        "UNKNOWN_TOKEN",
        "ASSIGNMENT_TOKEN",
        "LEFT_PAREN_TOKEN",
        "RIGHT_PAREN_TOKEN",
        "NUMBER_TOKEN",
        "KEYWORD_TOKEN",
        "WAIT_TOKEN",
        "PRINT_TOKEN",
        "PRINTLN_TOKEN",
        "STRING_TOKEN",
        "END_TOKEN",
        "SCRIPT_TOKEN",
        "EOF_TOKEN",
        "WHILE_TOKEN",
        "IF_TOKEN",
        "ELSE_TOKEN",
        "MODULO_TOKEN",
        "LEFT_BRACKET_TOKEN",
        "RIGHT_BRACKET_TOKEN",
        "COMMA_TOKEN",
        "DEF_TOKEN"
    };

    return strings[tokenType];
};
