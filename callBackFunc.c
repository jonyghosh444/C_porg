#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    printf("Calculating.....\n");
    return a + b;
}

void greetHelloAndExucute(int (*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}
void greetGmAndExecute(int (*fptr)(int, int),int val)
{
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
    printf("The other value is %d\n", val);
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetGmAndExecute(ptr,5);
    greetHelloAndExucute(ptr);
    return 0;
}