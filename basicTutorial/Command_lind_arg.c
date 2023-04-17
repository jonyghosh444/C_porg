#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value is: %d\n",argc);
    int result = 0;
    for (int i = 1; i < argc; i++)
    {
        printf("This argument number %d has value of %s \n", i, argv[i]);
        result = result + atoi(argv[i]);
    }
    printf("your result is: %d\n",result);
    
    return 0;
}
