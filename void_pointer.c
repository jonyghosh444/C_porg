#include <stdio.h>

int main()
{
    int a = 345;
    float b = 5.34;
    void *ptr;
    ptr = &b;
    printf("The value of a is %.2f\n", *((float *)ptr));
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    return 0;
}