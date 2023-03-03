#include <stdio.h>

int fatctorial(int num)
{
    int i,fac = 1;
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
    for (i=1  ; i <= num; i++)
    {
        fac = fac*i;
    }
    }
    return fac;
}

int main()
{
    int n;
    printf("Enter your number:\n");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, fatctorial(n));
    return 0;
}