#include <stdio.h>

#ifndef ERROR_H
#define ERROR_H

// Error code definitions
#define INVALID_INPUT 1
#define OPERATION_FAILED 2

// Function declarations
void print_error(int error_code);

#endif // ERROR_H

#include "error.h"

// Function to print error messages based on error codes
void print_error(int error_code)
{
    switch (error_code)
    {
    case INVALID_INPUT:
        fprintf(stderr, "❌ Error: Invalid input provided.\n");
        break;
    case OPERATION_FAILED:
        fprintf(stderr, "❌ Error: Operation failed (e.g., divide by zero).\n");
        break;
    default:
        fprintf(stderr, "❌ Error: An unknown error occurred.\n");
        break;
    }
}
