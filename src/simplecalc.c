#include "error.h"    // Include error handling functions
#include "math_ops.h" // Include math functions
#include "parser.h"   // Include parser functions
#include <stdio.h>    // Standard I/O functions
#include <stdlib.h>   // atoi() and exit()
#include <string.h>   // String handling functions

int main(int argc, char *argv[])
{
    // Ensure correct number of arguments (3 operands + operator)
    if (argc != 4)
    {
        fprintf(stderr, "Usage: %s <operand1> <operator> <operand2>\n", argv[0]);
        return INVALID_INPUT;
    }

    int32_t operand1, operand2, result;
    char operator;

    // Parse input arguments
    if (!parse_arguments(argv[1], argv[2], argv[3], &operand1, &operator, & operand2))
    {
        return INVALID_INPUT;
    }

    // Perform calculation
    if (!calculate(operand1, operator, operand2, &result))
    {
        return OPERATION_FAILED;
    }

    // Display result
    printf("%d %c %d = %d\n", operand1, operator, operand2, result);
    return SUCCESS;
}
