#include <stdio.h>
#define PI 3.14

int main()
{
    int a = 8;
    const float b = 3.22;
    // PI = 3.11; //cannot do this since PI is a constant
    // b = 4.321; // cannot do this since b is a constant
    // printf("Hello world\n");
    // printf("The value of a is %d and the value of b is %f\n", a,b);
    // printf("dfdf%7.4f\n",b);
    // printf("%-7.4fhh\n",b);
    
    // printf("%f\n",b);
    printf("%f\n", PI);
    printf("tab \t \n");
    printf("tab\tsds \a \n");


    

    return 0;
}

/*
%c  ------ character
%d  ------ integer
%f  ------ float
%e  ------ long
%lf ------ double
%Lf ------ long double
*/