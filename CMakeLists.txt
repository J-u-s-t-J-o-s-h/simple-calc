cmake_minimum_required(VERSION 3.10)
project(SimpleCalc C)

# Set C standard to C11
set(CMAKE_C_STANDARD 11)

# Add source files
set(SRC_FILES src/simplecalc.c src/parser.c src/math_ops.c src/error.c)

# Include headers
include_directories(include)

# Create the executable
add_executable(simplecalc ${SRC_FILES})

# Enable testing
enable_testing()

# Add unit test executable
add_executable(test_math tests/test_math.c src/math_ops.c)
target_include_directories(test_math PRIVATE include)
target_link_libraries(test_math cunit)

# Register test
add_test(NAME MathTests COMMAND test_math)
