#include <stdio.h>

int fib_rec(int n)
{

    if (n <= 1)

        return n;

    else
    {

        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}

int fib_itr(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n; i++)
    {
        b=a+b;
        a=b-a;
    }
    

    return a;
}

int main()
{

    int n;
    printf("Enter number for fimonacci number:\n");
    scanf("%d", &n);
    printf("fimonacci series(itr) for %d\n", fib_itr(n));
    printf("fimonacci series(Recussion) for %d\n", fib_rec(n));
    

    return 0;
}
