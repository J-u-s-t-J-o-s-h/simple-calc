#include "math_ops.h"
#include <limits.h>
#include <stdio.h>

int calculate(int32_t operand1, char operator, int32_t operand2, int32_t *result)
{
    switch (operator)
    {
    case '+':
        if ((operand2 > 0 && operand1 > INT_MAX - operand2) ||
            (operand2 < 0 && operand1 < INT_MIN - operand2))
        {
            fprintf(stderr, "❌ Error: Integer overflow in addition.\n");
            return 0;
        }
        *result = operand1 + operand2;
        return 1;
    case '-':
        if ((operand2 > 0 && operand1 < INT_MIN + operand2) ||
            (operand2 < 0 && operand1 > INT_MAX + operand2))
        {
            fprintf(stderr, "❌ Error: Integer overflow in subtraction.\n");
            return 0;
        }
        *result = operand1 - operand2;
        return 1;
    case '*':
        if (operand1 > 0 && operand2 > 0 && operand1 > INT_MAX / operand2)
        {
            fprintf(stderr, "❌ Error: Integer overflow in multiplication.\n");
            return 0;
        }
        if (operand1 > 0 && operand2 < 0 && operand2 < INT_MIN / operand1)
        {
            fprintf(stderr, "❌ Error: Integer overflow in multiplication.\n");
            return 0;
        }
        if (operand1 < 0 && operand2 > 0 && operand1 < INT_MIN / operand2)
        {
            fprintf(stderr, "❌ Error: Integer overflow in multiplication.\n");
            return 0;
        }
        if (operand1 < 0 && operand2 < 0 && operand1 < INT_MAX / operand2)
        {
            fprintf(stderr, "❌ Error: Integer overflow in multiplication.\n");
            return 0;
        }
        *result = operand1 * operand2;
        return 1;
    case '/':
        if (operand2 == 0)
        {
            fprintf(stderr, "❌ Error: Division by zero.\n");
            return 0;
        }
        if (operand1 == INT_MIN && operand2 == -1)
        {
            fprintf(stderr, "❌ Error: Integer overflow in division.\n");
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
        if (operand2 < 0 || operand2 > 31)
        {
            fprintf(stderr, "❌ Error: Invalid shift value. Must be between 0 and 31.\n");
            return 0;
        }
        *result = operand1 << operand2;
        return 1;
    case '>':
        if (operand2 < 0 || operand2 > 31)
        {
            fprintf(stderr, "❌ Error: Invalid shift value. Must be between 0 and 31.\n");
            return 0;
        }
        *result = operand1 >> operand2;
        return 1;
    default:
        fprintf(stderr, "❌ Error: Unsupported operation '%c'.\n", operator);
        return 0;
    }
}
