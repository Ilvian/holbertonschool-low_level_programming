
C - Variadic functions
Variadic functions in C are functions that can accept a variable number of arguments. They are declared using the ellipsis (...) in the function parameter list. Variadic functions are useful when the number of arguments or the types of arguments are not known in advance.

To work with variadic functions in C, you need to include the `` header file, which provides the necessary macros and types.

Here is an example of a variadic function that calculates the sum of a variable number of integers:

c
#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    va_list args;
    int total = 0;

    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        total += num;
    }

    va_end(args);

    return total;
}

int main()
{
    int result1 = sum(3, 1, 2, 3);
    int result2 = sum(5, 10, 20, 30, 40, 50);

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);

    return 0;
}
In this example, the `sum` function takes a count parameter followed by a variable number of integer arguments. Inside the function, we use the `va_list`, `va_start`, `va_arg`, and `va_end` macros to iterate over the variable arguments and calculate the sum. The `va_list` type is used to declare a variable that will hold the information about the variable arguments.

Note that variadic functions should always have at least one named parameter before the ellipsis. This named parameter is used to determine the number of arguments passed to the function.

When calling the variadic function, you provide the count of the arguments followed by the actual arguments.

In the `main` function, we demonstrate how to use the `sum` function with different numbers of arguments. The results are then printed to the console.

Output:
Result 1: 6
Result 2: 150

Variadic functions provide flexibility and can be used in various scenarios where the number or type of arguments may vary. However, they require careful handling to ensure the correct number and type of arguments are passed to the function.
