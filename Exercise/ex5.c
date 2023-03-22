#include <stdio.h>

void *Array_Rev(int *arr)
{
    
    int *p1, *p2;
    if (!arr || !*arr)
        return arr;
    for (p1 = arr, p2 = arr + sizeof(arr)  - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    printf("After Reversed\n");
    for (int i = 0; i < sizeof(arr); i++)
    {
        printf("Element of array at index %d is %d\n", i, arr[i]);
    }
    
}

int main()
{
    int arr[] = {6, 1, 2, 3, 4, 5, 61, 9};
    printf("Before Reversed\n");

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("Element of array at index %d is %d\n", i, arr[i]);
    }
    
    Array_Rev(arr);

    return 0;
}