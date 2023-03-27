#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Use of maloc
    // int n;
    // printf("Enter the array size:\n");
    // scanf("%d", &n);

    // int *ptr;
    // ptr = (int *)malloc(n * sizeof(int));
    // // Taking input
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of index %d\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // printing array
    // for (int i = 0; i < n; i++)
    // {
    //     printf("value at index %d is %d\n", i, ptr[i]);
    // }

    // Use of Caloc
    int n;
    printf("Enter the array size:\n");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    // Taking input
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of index %d\n", i);
        scanf("%d", &ptr[i]);
    }
    // printing array
    for (int i = 0; i < n; i++)
    {
        printf("value at index %d is %d\n", i, ptr[i]);
    }

    // Use of Realloc
    printf("Enter the new array size:\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));
    // Taking input
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value of index %d\n", i);
        scanf("%d", &ptr[i]);
    }
    // printing array
    for (int i = 0; i < n; i++)
    {
        printf("New value at index %d is %d\n", i, ptr[i]);
    }
    printf("Before free: %ld\n", sizeof(ptr));
    printf("Before free: %p\n", ptr);

    // Use of free 
    free(ptr);
    printf("After free: %ld\n", sizeof(ptr));
    printf("After free: %p\n", ptr);
    for (int i = 0; i < n; i++)
    {
        printf("New value at index %d is %d\n", i, ptr[i]);
    }

    return 0;
}
