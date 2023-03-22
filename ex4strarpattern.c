#include<stdio.h>


void triangular(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

}

void rev_triangular(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}


int main()
{   
    int choice;
    printf("Enter 1 for tirangular star paatrn \nEnter 2 for reverse triangular star pattern.\n");
    scanf("%d",&choice);

    if (choice==1)
    {
        int n;
        printf("Enter number of star:\n");
        scanf("%d",&n);
        triangular(n);
    }
    else if (choice==2)
    {
        int n;
        printf("Enter number of star:\n");
        scanf("%d",&n);
        rev_triangular(n);
    }
    else
    {
        printf("Please enter valid choice.");
    }
    
    


    return 0;
}