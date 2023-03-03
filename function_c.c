#include<stdio.h>

int sum(int a,int b);


void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n",'*');
    }
    
    
}

int takenumber()
{
    int i;
    printf("Enter a number:\n");
    scanf("%d",&i);
    return i;
}


int main()
{
    int a,b,c,d;
    a = 9;
    b = 45;
    c = sum(a,b);
    // printstar(7);
    d = takenumber();
    printf("c = %d\n",d);
    // printf("The sum is %d\n",c);
    
    return 0;
}
int sum(int a, int b)
{
    return a+b;
}