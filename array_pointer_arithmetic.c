#include<stdio.h>


int main()
{
    // Pointer arithmetic
    // int a = 2;
    // int* ptr = &a;
    
    // printf("%d\n",ptr);
    // printf("%d\n",ptr+1);
    // printf("%d\n",ptr+2);

    // Array_pointer

    int arr[]={4,2,1,23,3};
    int* arrayptr = arr;

    arrayptr++;

    printf("Value at position 1 of the a4rray is%d\n",arr[0]);

    printf("The adress of first element ot the array is %d \n",&arr[0]);
    printf("The adress of first element ot the array is %d \n",arr);
    printf("The adress of first element ot the array is %d \n",arr+1);
    printf("The adress of first element ot the array is %d \n",&arr[1]);



    printf("The value at adress of first element ot the array is %d \n",*(&arr[0]));
    printf("The value at adress of first element ot the array is %d \n",*(arr));
    printf("The value at adress of second element ot the array is %d \n",*(arr+1));
    printf("The value at adress of second element ot the array is %d \n",*(&arr[1]));
    

    
  

    return 0;
}