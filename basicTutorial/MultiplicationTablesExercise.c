#include<stdio.h>

/*
Print a multiplication table of a number entered by the user in pretty form.

Example:
input:
Enter the number you want multiplication table of:

6
output:
Table of 6:
6 x 1 = 6
.
.
.
6 x 10 = 10
*/

int main()
{
    int num;
    printf("Enter the number you want multiplication: \n");
    scanf("%d", &num);
    printf("Table of %d\n", num);
    printf("Without loop:\n");
    printf("%d * 1 = %d\n",num, num*1);
    printf("%d * 2 = %d\n",num, num*2);
    printf("%d * 3 = %d\n",num, num*3);
    printf("%d * 4 = %d\n",num, num*4);
    printf("%d * 5 = %d\n",num, num*5);
    printf("%d * 6 = %d\n",num, num*6);
    printf("%d * 7 = %d\n",num, num*7);
    printf("%d * 8 = %d\n",num, num*8);
    printf("%d * 9 = %d\n",num, num*9);
    printf("%d * 10 = %d\n",num, num*10);

    printf("With loop:\n");

    for (int i = 1; i<=10; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    

    return 0;
}
