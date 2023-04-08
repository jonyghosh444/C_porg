#include <stdio.h>

int main()
{
    int arr[2][4] = {{34, 2, 1, 454}, {33, 22, 31, 34}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("%d\n",arr[1][3]);

    return 0;
}
