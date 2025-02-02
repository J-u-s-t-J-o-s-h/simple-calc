#include "../include/math_ops.h"
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

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
    CU_add_test(suite, "Division", test_division);
    CU_add_test(suite, "Divide by Zero", test_divide_by_zero);
    CU_add_test(suite, "Bitwise AND", test_bitwise_and);

    // Run tests and output results
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
