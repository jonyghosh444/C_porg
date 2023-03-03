#include<stdio.h>

int main()
{
    int ansm,anss;
    printf("Did you pass in Math? (IF yes enter 1 or enter 0):\n");
    scanf("%d",&ansm);
    printf("Did you pass in Science?(IF yes enter 1 or enter 0):\n");
    scanf("%d",&anss);
    if (anss==1 && ansm==1)
    {
        printf("Congratulations You got 45Taka prize money for successfully passing on both subject...\n");
    }
    else if (anss==1)
    {
        printf("Congratulations You got 15Taka prize money for successfully passing on science...\n");
    }
    else if (ansm==1)
    {
        printf("Congratulations You got 15Taka prize money for successfully passing on Math...\n");
    }
    else
    {
        printf("Batter luck next time.....\n");
    };
    
    return 0;
}
