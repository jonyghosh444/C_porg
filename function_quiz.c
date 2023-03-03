#include<stdio.h>


void enter_first_number()
{
    printf("Enter first number:\n");
}

void enter_second_number()
{
    printf("Enter second number:\n");
}

void sum_is()
{
    printf("Sum is:\n");
}

int main()
{
    int a,b;
    enter_first_number();
    scanf("%d",&a);
    enter_second_number();
    scanf("%d",&b);
    sum_is();
    printf("%d\n",a+b);
    return 0;
}
