#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr = NULL;
    if (ptr!=NULL)
    {
        printf("The adress of a is %d\n",*ptr);
    
    }
    else
    {
        printf("the pointer is a null pointer and can't be dereferenced\n");
    }
    
    
    return 0;
}