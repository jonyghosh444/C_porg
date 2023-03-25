#include <stdio.h>

int gl = 6;

int static_var()
{
    static int y = 6;
    y++;
    return y;
}
int normal_var()
{
    int v = 6;
    v++;
    return v;
}

int main()
{
    static int x = 10; // static variable
    static int o;
    int p;
    // int gl = 8;
    printf("%d\n", gl);
    printf("%d\n", x);
    int a = static_var();
    printf("%d\n", a);
    int b = static_var();
    printf("%d\n", b);

    int m = normal_var();
    printf("%d\n", m);
    int n = normal_var();
    printf("%d\n", n);

    printf("%d\n", o);
    printf("%d\n", p);

    return 0;
}