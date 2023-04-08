// Matrix Multiplication
#include <stdio.h>
#include <stdlib.h>

int **MatrixMultiplication(int **matrixa, int **matrixb, int rowa, int colb)
{
    int **ptres = (int **)malloc(rowa * sizeof(int));
    for (int i = 0; i < rowa; i++)
    {
        ptres[i] = (int *)malloc(colb * sizeof(int));
    }
    for (int i = 0; i < rowa; i++)
    {
        for (int j = 0; j < colb; j++)
        {
            ptres[i][j] = 0;
            for (int k = 0; k < colb; k++)
            {
                ptres[i][j] += matrixa[i][k] * matrixb[k][j];
            }
            
        }
    }
    return ptres;
}

int main()
{
    int r1, r2, c1, c2;
    printf("Enter row size for Matrix A:\n");
    scanf("%d", &r1);
    printf("Enter column size for Matrix A:\n");
    scanf("%d", &c1);
    printf("Enter row size for Matrix B:\n");
    scanf("%d", &r2);
    printf("Enter column size for Matrix B:\n");
    scanf("%d", &c2);

    // Dynamic memory allocation For Matrix A
    int **ptra = (int **)malloc(r1 * sizeof(int));
    for (int i = 0; i < r1; i++)
    {
        ptra[i] = (int *)malloc(c1 * sizeof(int));
    }
    // Dynamic memory allocation For Matrix B
    int **ptrb = (int **)malloc(r2 * sizeof(int));
    for (int i = 0; i < r2; i++)
    {
        ptrb[i] = (int *)malloc(c2 * sizeof(int));
    }

    // Entering value to Matrix A
    printf("Enter value in Matrix A:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &ptra[i][j]);
        }
    }
    // Entering value to Matrix B
    printf("Enter value in Matrix B:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &ptrb[i][j]);
        }
    }
    // Printing Matrix A values
    printf("Printing Matrix A:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", ptra[i][j]);
        }
        printf("\n");
    }
    // Printing Matrix B values
    printf("Printing Matrix B:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", ptrb[i][j]);
        }
        printf("\n");
    }
    printf("Matrix Multiplication Result:\n");
    if (c1 != r2)
    {
        printf("Please Enter valid Matrix.\nN.B: The product of two matrices will be defined if the number of columns in the \nfirst matrix is equal to the number of rows in the second matrix.");
    }
    else
    {
        int **res = MatrixMultiplication(ptra, ptrb, r1, c2);
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
        free(res);
    }
    free(ptra);
    free(ptrb);


    return 0;
}
