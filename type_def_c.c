#include <stdio.h>

typedef struct student 
{
    int id;
    int marks;
    int sec;
}std;



int main()
{
    // typedef <previous_name> <alias_name>; //(giving new name)
    // typedef unsigned long ul;
    // ul l1, l2, l3;
    // typedef int integer;
    // integer a = 4;
    // printf("value of a is %d.\n",a);
    // std s1,s2;
    // s1.id = 34;
    // s2.id = 22;
    // printf("s1's id is %d\n",s1.id);
    // printf("s2's id is %d\n",s2.id);

    // int* a,b;
    typedef int* intpointer;
    intpointer a,b;
    int c = 89;
    a = &c;
    b = &c;
    printf("%p\n",a);
    printf("%d\n",*a);
    printf("%p\n",b);
    printf("%d\n",*b);

    return 0;
}