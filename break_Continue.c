#include<stdio.h>

int main()
{

    int i,j, age;
    for(i=0;i<10;i++)
     {  
        printf("%d) Enter your age\n",i+1);
        scanf("%d",&age);
        if(age>10)
        {
            
            for(j=1;j<=age;j++)
        { 
            if(j>5)
            {
                break;
            }
            else
            {
            printf("My age in now %d year\n",j);
            }
        }
            
        }
        else
        {
            printf("Your age is %d. It is less than 10.\n",age);
            continue;
            
        }
        printf("You have perfact age....\n");
        

        
     }
    return 0;
}