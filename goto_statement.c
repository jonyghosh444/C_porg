#include<stdio.h>

int main()
{
    // label:
    //     printf("we are inside in label.\n");
    //     goto end;
    // printf("Hello world\n.");
    // goto label;
    // end:
    //     printf("we are at end\n");
    
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; i < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d",&num);
            if (num==0)
            {
                goto end;
            }
            
        }

        
    }
    end:
        printf("Program is exited.");


    return 0;
}
