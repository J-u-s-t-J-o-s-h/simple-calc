#include "parser.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to parse input arguments
int parse_arguments(char *op1, char *op, char *op2, int32_t *operand1, char *operator, int32_t * operand2)
{
    // Convert first operand to integer
    char *endptr;
    *operand1 = strtol(op1, &endptr, 10);
    if (*endptr != '\0')
    {
        fprintf(stderr, "❌ Error: Invalid first operand '%s'\n", op1);
        return 0;
    }

    // Convert second operand to integer
    *operand2 = strtol(op2, &endptr, 10);
    if (*endptr != '\0')
    {
        fprintf(stderr, "❌ Error: Invalid second operand '%s'\n", op2);
        return 0;
    }

    // Validate standard operators
    if (strlen(op) == 1 && strchr("+-*/%&|^", op[0]))
    {
        *operator= op[0];
        return 1;
    }

    // Special case for shift operators '<<' and '>>'
    if (strcmp(op, "<<") == 0)
    {
        *operator= '<'; // Store as '<' and handle in math_ops.c
        return 1;
    }
    else if (strcmp(op, ">>") == 0)
    {
        *operator= '>'; // Store as '>' and handle in math_ops.c
        return 1;
    }

    fprintf(stderr, "❌ Error: Invalid operator '%s'\n", op);
    return 0;
}
