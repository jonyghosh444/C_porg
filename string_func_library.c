#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Combine(char str1[], char str2[])
{
    char plus[] = "+\n";
    char plc[60];
    strcpy(plc, strcat(str1, plus)); // copy
    puts(strcat(plc, str2));
}
int ShowLenght(char str[])
{
    int lenght;
    lenght = strlen(str);
    return lenght;
}
char *strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}
int CompareString(char str1[], char str2[])
{
    return strcmp(str1, str2);
}

int main()
{
    char str1[32], str2[32];
    printf("Enter first string\n");
    fgets(str1, 32, stdin);
    printf("Enter second string\n");
    fgets(str2, 32, stdin);

    while (1)
    {
        int choice;
        char please[] = "Please Enter a valid number for choice.";
        printf("Enter 1 for concatenate or combine your strings.\n"); // strings Concatenate strcat()
        printf("Enter 2 for show length of your strings.\n");         // string length strlen()
        printf("Enter 3 for show reverse of your strings.\n");        // string reverse strrev() But currently strrev isn't working on linux so usign different function
        printf("Enter 4 for compare your two strings\n");             // strings compare strcmp()
        printf("Enter 0 for Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Combine(str1, str2);
            break;
        case 2:
            printf("Length of 1st string is %d\n", ShowLenght(str1));
            printf("Length of 2nd string is %d\n", ShowLenght(str2));
            break;
        case 3:
            printf("Reverse of 1st string is %s\n", strrev(str1));
            printf("Reverse of 2nd string is %s\n", strrev(str2));
            break;
        case 4:
            printf("Compare Result of two string is: %d\n", CompareString(str1, str2));
            break;
        case 0:
            exit(0);

        default : puts(please);
        }
    }

    return 0;
}
