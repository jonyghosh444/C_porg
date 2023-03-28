#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, EmpLen;
    char *ptr;
    i = 0;
    char a, b;
    while (i < 3)
    {
        printf("Enter the number of characters for Employee Id %d:\n", i + 1);
        scanf("%d", &EmpLen);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *)malloc((EmpLen + 1) * sizeof(char));
        printf("Enter the Employee Id 1:\n");
        scanf("%s", ptr);
        printf("Employee Id %d is %s\n", i + 1, ptr);
        free(ptr);
        i++;
    }

    return 0;
}