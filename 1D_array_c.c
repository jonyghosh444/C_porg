#include<stdio.h>

int main()
{
    
    int arr_num;
    printf("Enter your array range:\n");
    scanf("%d",&arr_num);

    int i,arr[arr_num];

    for (i = 0; i < arr_num; i++)
    {
        printf("Enter element for index %d :\n",i);
        scanf("%d",&arr[i]);
    }

    printf("Your array:\n");

    for ( i = 0; i < arr_num; i++)
    {
        printf("Value of index %d is %d\n",i,arr[i]);
    }
    
    


    return 0;
}
