#include<stdio.h>

int main()
{
    char a;
    printf("Enter value:\n");
    scanf("%c",&a);
    switch (a)
    {
    case 'y':
        printf("value is correct\n");
        break;
    case 'n':
        printf("value is incorrect.\n");
        break;
    
    default:
        printf("Unexpected value\n");
        
    }
    return 0;
}
