#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *i2;
    while (i < 45555555555545)
    {
        printf("loading...  %d\n", i);
        i2 = malloc(344444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }

        i++;
        free(i2);
    }

    return 0;
}