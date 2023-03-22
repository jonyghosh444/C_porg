#include<stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}

int main()
{
    // char str[] = {'J','o','n','y','\0'};

    // char strt[] = "Jony";

    char str[34];
    fgets(str,34,stdin);
    // puts(str);

    printf("%s",str);
    // printStr(str);
    // printf("\n");


    return 0;
}