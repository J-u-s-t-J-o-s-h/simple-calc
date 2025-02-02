#include "../include/math_ops.h"
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include <limits.h> // Required for overflow tests

// Test addition
void test_addition()
{
    int32_t result;
    CU_ASSERT_TRUE(calculate(10, '+', 5, &result));
    CU_ASSERT_EQUAL(result, 15);
}

// Test subtraction
void test_subtraction()
{
    int32_t result;
    CU_ASSERT_TRUE(calculate(15, '-', 3, &result));
    CU_ASSERT_EQUAL(result, 12);
}

// Test multiplication
void test_multiplication()
{
    int32_t result;
    CU_ASSERT_TRUE(calculate(6, '*', 7, &result));
    CU_ASSERT_EQUAL(result, 42);
}

// Test multiplication overflow
void test_multiplication_overflow()
{
    int32_t result;
    CU_ASSERT_FALSE(calculate(INT_MAX, '*', 2, &result)); // Should return false due to overflow
}

// Test division
void test_division()
{
    int32_t result;
    CU_ASSERT_TRUE(calculate(10, '/', 2, &result));
    CU_ASSERT_EQUAL(result, 5);
}

// Test division by zero (should fail)
void test_divide_by_zero()
{
    int32_t result;
    CU_ASSERT_FALSE(calculate(10, '/', 0, &result)); // Should return false
}

// Test bitwise AND
void test_bitwise_and()
{
    int32_t result;
    CU_ASSERT_TRUE(calculate(6, '&', 3, &result));
    CU_ASSERT_EQUAL(result, 2);
}

// Test bitwise OR
void test_bitwise_or()
{
    int32_t result;
    CU_ASSERT_TRUE(calculate(6, '|', 3, &result));
    CU_ASSERT_EQUAL(result, 7);
}

// Test bitwise XOR
void test_bitwise_xor()
{
    int32_t result;
    CU_ASSERT_TRUE(calculate(6, '^', 3, &result));
    CU_ASSERT_EQUAL(result, 5);
}

// Test left shift
void test_left_shift()
{
    int32_t result;
    CU_ASSERT_TRUE(calculate(4, '<', 2, &result));
    CU_ASSERT_EQUAL(result, 16);
}

// Test right shift
void test_right_shift()
{
    int32_t result;
    CU_ASSERT_TRUE(calculate(16, '>', 2, &result));
    CU_ASSERT_EQUAL(result, 4);
}

// Test invalid shift amount (should fail)
void test_invalid_shift()
{
    int32_t result;
    CU_ASSERT_FALSE(calculate(5, '<', 40, &result)); // Invalid shift
    CU_ASSERT_FALSE(calculate(5, '>', -5, &result)); // Negative shift
}

// Test unsupported operators (should fail)
void test_invalid_operator()
{
    int32_t result;
    CU_ASSERT_FALSE(calculate(10, '@', 5, &result)); // Invalid operator
}

// Initialize the test suite
int setup() { return 0; }
int teardown() { return 0; }

// Main function to run tests
int main()
{
    // Initialize CUnit
    if (CU_initialize_registry() != CUE_SUCCESS)
        return CU_get_error();

    CU_pSuite suite = CU_add_suite("Math Operations Suite", setup, teardown);
    if (!suite)
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Add tests to the suite
    CU_add_test(suite, "Addition", test_addition);
    CU_add_test(suite, "Subtraction", test_subtraction);
    CU_add_test(suite, "Multiplication", test_multiplication);
    CU_add_test(suite, "Multiplication Overflow", test_multiplication_overflow);
    CU_add_test(suite, "Division", test_division);
    CU_add_test(suite, "Divide by Zero", test_divide_by_zero);
    CU_add_test(suite, "Bitwise AND", test_bitwise_and);
    CU_add_test(suite, "Bitwise OR", test_bitwise_or);
    CU_add_test(suite, "Bitwise XOR", test_bitwise_xor);
    CU_add_test(suite, "Left Shift", test_left_shift);
    CU_add_test(suite, "Right Shift", test_right_shift);
    CU_add_test(suite, "Invalid Shift", test_invalid_shift);
    CU_add_test(suite, "Invalid Operator", test_invalid_operator);

    // Run tests and output results
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
