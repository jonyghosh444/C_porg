#include<stdio.h>
#include<string.h>
void *strrev(char *str)
{
    printf("%ld\n",strlen(str));
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    printf("%s\n",str);
}

int main()
{
    // int f[] = {4,5,3};
    // char j[] = "Jony";
    // int *p ;
    // p = f+sizeof(f) / sizeof(f[0]) - 1;
    
    // // printf("%p\n",&f[0]);
    // // printf("%p\n",&f[1]);
    // // printf("%p\n",&f[2]);
    // // printf("%p\n",p);
    // // printf("%d\n",*p);
    // // printf("%ld\n",sizeof(f) / sizeof(f[0]) - 1);
    // // printf("%ld\n",sizeof(f));
    // strrev(j);
    // printf("%ld\n",strlen(j));

    // return 0;
    int i,j;
    i = 1;
    j = i++;
    printf("i = %d\n",i);
    printf("j = %d\n",j);
    int x,h;
    x = 1;
    h = ++x;
    printf("x = %d\n",x);
    printf("h = %d\n",h);
    return 0;
}