#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

float edistance(float x1, float y1, float x2, float y2)
{
    float edis;
    edis = sqrt((float)((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    printf("The distance is: %f\n", edis);
    return edis;
}

float areaOfCircle(float x1, float y1, float x2, float y2, float (*fptr)(float, float, float, float))
{
    float r, rsq;
    r = fptr(x1, y1, x2, y2);
    rsq = r * r;
    return PI * rsq;
}

int main()
{
    float x1, y1, x2, y2;
    printf("Enter the value for x1:\n");
    scanf("%f", &x1);
    printf("Enter the value for x2:\n");
    scanf("%f", &x2);
    printf("Enter the value for y1:\n");
    scanf("%f", &y1);
    printf("Enter the value for y2:\n");
    scanf("%f", &y2);

    float (*fptr)(float, float, float, float);
    fptr = edistance;
    printf("The area of circle is: %.2f\n", areaOfCircle(x1, y1, x2, y2, fptr));

    return 0;
}