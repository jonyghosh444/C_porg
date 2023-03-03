#include<stdio.h>


int main()
{
    int x;
    printf("Enter your number:\n");
    scanf("%d",&x);

    if(x>2)
    {
        printf("This will execute\n");
    };
    printf("after\n");
    if (x<100)
    {
        printf("%d is lower than 100\n",x);
    }
    else{
        printf("%d is greater than 100\n",x);
    };
    printf("after code 2nd...\n");
    if (x == 10)
    {
        printf("%d is equal to 100...\n",x);
    }
    else if (x<10)
    {
        printf("%d is lower than 10\n",x);
    }
    else 
    {
        printf("Out of condition 3...\n");
    }

    printf("After code 3rd....");
    

    return 0;
}
