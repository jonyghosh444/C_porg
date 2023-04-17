#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    printf("The sum of 1 and 2 is: %d\n", sum(1, 2)); // Testing the function
    int (*fptr)(int, int);                            // Declaring a function pointer
    fptr = &sum;                                      // Creating a function pointer
    int d = (*fptr)(3, 4);                            // Dereferencing a function pointer
    printf("The sum(by func pointer) of 3,4 is: %d\n", d);

    return 0;
}