#include<stdio.h>


int main()
{   
    //Arithmetic Operators
    // +,-,*,/
    int a,b;
    a = 30;
    b = 6;
    printf("a-b = %d\n", a-b);
    printf("a+b = %d\n", a+b);
    printf("a*b = %d\n", a*b);
    float divr = a/b;
    printf("a/b = %.2f\n", divr);
    
    //Relational Operators
    // ==,!=,<,>,<=,>=


    //Logical Operator
    // &&, ||, !
    int c = 1;
    int d = 1;
    printf("logical %d\n", !d);
    printf("logical %d\n", c&&d);
    printf("logical %d\n", c||d);

    //bitwise operator
    // and: &, or: ||, xor: ^, binary one's complement: ~, binary left shift: <<, binary right shift: >>

    int e = 0;
    int f = 1;
    printf("Bitwise %d\n", e^f);
    printf("Bitwise %d\n", e&f);
    printf("Bitwise %d\n", e||f);

    //Assignment operatiors
    // equal to: =, Add AND: +=, subtract AND -=, Multiply AND: *=, Divide AND: /=

    //Miscellaneous operators
    //sizeof(), Returns the address of a variable: &, Pointer: *, Conditional Epression: ?:
    double g = 0;
    printf("size of g %d\n", sizeof(g));
 
    //operator precedence in c
    // Multiplicative: */%, Additive: +-, Shift: << >>, Relational: < <= > >=

    return 0;
}
