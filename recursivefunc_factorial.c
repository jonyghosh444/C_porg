#include <stdio.h>

int fatctorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * fatctorial(num - 1));
    }
}

int main()
{
    int n;
    printf("Enter your number:\n");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, fatctorial(n));
    return 0;
}
