#include <stdio.h>

int fib_rec(int n)
{

    if (n <=1)
    
        return n;
    
    else
    {   
        
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}

int main()
{

    int n;
    printf("Enter number for fimonacci number:\n");
    scanf("%d", &n);
    printf("%d is the number of fimonacci series for %d\n",fib_rec(n),n);
    
    return 0;
}
