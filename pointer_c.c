#include<stdio.h>

int main()
{
    int n;
    n = 7;
    int* ptr = &n;
    int* ptrnull = NULL;
    
    printf("The value of n is %d \n",n);
    printf("The address of n is %p \n",&n);
    printf("The value of ptr is %d\n", *ptr);
    printf("The value/addrees(n) of n is %p\n", ptr);
    printf("The address of n is %p\n", &ptr);
    printf("The address of n is %p\n", ptrnull);
    printf("The address of n is %p\n", &ptrnull);
    
    return 0;
}
