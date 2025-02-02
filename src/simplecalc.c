#include "error.h"    // Include error handling functions
#include "math_ops.h" // Include math functions
#include "parser.h"   // Include parser functions
#include <stdio.h>    // Standard I/O functions
#include <stdlib.h>   // atoi() and exit()
#include <string.h>   // String handling functions

// Function to print usage instructions
void print_usage(char *program_name)
{
    printf("🔹 Usage: %s <operand1> <operator> <operand2>\n", program_name);
    printf("🔹 Example: %s 10 + 5\n", program_name);
    printf("🔹 Supported operators: + - * / %% & | ^ << >>\n");
    printf("💡 If using '<<' or '>>', enclose them in quotes: './simplecalc 4 \"<<\" 10'\n");
}

int main(int argc, char *argv[])
{
    // Ensure correct number of arguments (3 operands + operator)
    if (argc != 4)
    {
        fprintf(stderr, "❌ Error: Invalid number of arguments.\n");
        print_usage(argv[0]);
        return INVALID_INPUT;
    }

    int32_t operand1, operand2, result;
    char operator;

    // Parse input arguments
    if (!parse_arguments(argv[1], argv[2], argv[3], &operand1, &operator, & operand2))
    {
        print_usage(argv[0]);
        return INVALID_INPUT;
    }

    // Perform calculation
    if (!calculate(operand1, operator, operand2, &result))
    {
        print_usage(argv[0]);
        return OPERATION_FAILED;
    }

    // Display result
    if (operator== '<')
        printf("%d << %d = %d\n", operand1, operand2, result);
    else if (operator== '>')
        printf("%d >> %d = %d\n", operand1, operand2, result);
    else
        printf("%d %c %d = %d\n", operand1, operator, operand2, result);

    return SUCCESS;
}
