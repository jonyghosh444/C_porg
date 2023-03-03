#include<stdio.h>
#include<stdbool.h>


int main()
{
    int choice,kg,cex;
    float fahr;
    
    while(true)
    {
        printf("Enter 1 for convert kilogram gram.\n");
        printf("Enter 2 for convert faranhite to celcius.\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("Enter unit(kg):\n");
            scanf("%d",&kg);
            printf("%d is %d gram\n",kg,kg*1000);
            printf("Enter 3 to continue or Enter 0 to exit:\n");
            scanf("%d",&cex);
            if(cex==3)
            {
                continue;
            }
            else if (cex==0)
            {
                break;
            }
            
        }
            
        else if (choice==2)
        {
            printf("Enter unit(fahrenheit):\n");
            scanf("%f",&fahr);
            printf("%.2f is %.2f degree celcius\n",fahr,(fahr-32)*5/9);
            printf("Enter 3 to continue or Enter 0 to exit:\n");
            scanf("%d",&cex);
            if(cex==3)
            {
                continue;
            }
            else if (cex==0)
            {
                break;
            }
        }
        
    
    }
    

    return 0;
}
