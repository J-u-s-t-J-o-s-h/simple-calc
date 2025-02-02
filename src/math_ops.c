#include "math_ops.h"
#include <limits.h>
#include <stdio.h>

int calculate(int32_t operand1, char operator, int32_t operand2, int32_t *result)
{
    switch (operator)
    {
    case '+':
        *result = operand1 + operand2;
        return 1;
    case '-':
        *result = operand1 - operand2;
        return 1;
    case '*':
        *result = operand1 * operand2;
        return 1;
    case '/':
        if (operand2 == 0)
        {
            fprintf(stderr, "Error: Division by zero.\n");
            return 0;
        }
        *result = operand1 / operand2;
        return 1;
    case '&':
        *result = operand1 & operand2;
        return 1;
    case '|':
        *result = operand1 | operand2;
        return 1;
    case '^':
        *result = operand1 ^ operand2;
        return 1;
    case '<':
        *result = operand1 << operand2;
        return 1;
    case '>':
        *result = operand1 >> operand2;
        return 1;
    default:
        fprintf(stderr, "Error: Unsupported operation '%c'.\n", operator);
        return 0;
    }
}
