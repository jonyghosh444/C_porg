#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 43;
    sum = a + b;
    // return *sum;
    return &sum;
}

int main()
{
    // case 1: Deallocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 314;
    ptr[2] = 342;
    ptr[3] = 3452;
    free(ptr); // ptr is now a dangling pointer;

    // case 2: Function returnign local variable address
    int *dangptr = functionDangling(); // ptr is now a dangling pointer;

    
    // case 3: If a variable goes out of scope
    // int * danglingPtr3;
    // {
    //     int a = 12;
    //     danglingPtr3 = &a;
    // }
    //Here variable goes out of scope which means danglingPtr3 is pointing to a location which is free and hence danglingPtr3 is now a dangling pointer
    return 0;
}