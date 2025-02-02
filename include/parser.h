#ifndef PARSER_H
#define PARSER_H

#include <stdint.h> // Standard integer types

// Function prototype for parsing command-line arguments
int parse_arguments(char *op1, char *op, char *op2, int32_t *operand1, char *operator, int32_t * operand2);

#endif // PARSER_H
