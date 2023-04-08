#include <stdio.h>
// #include "Storage_classes_temp.c"

// int sum=897;
int myfunc(int a, int b)
{
    // auto int sum;
    static int sum;

    // sum = a + b;
    return sum++;
}
// int sum = 34;
int main()
{

    // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition - Declaration + space reservation
    register int add_sum1 = myfunc(3,5);
    register int add_sum2 = myfunc(3,5);
     int add_sum3 = myfunc(3,5);
    register int add_sum4 = myfunc(3,5);

    printf("The sum is %d\n", add_sum1);
    printf("The sum is %d\n", add_sum2);
    printf("The sum is %p\n", &add_sum3);
    printf("The sum is %d\n", add_sum4);
    return 0;
}