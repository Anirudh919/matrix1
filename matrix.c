#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void addmatrix(int a[][])
{
    int sum, m, n, i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {    jlihjlkinkl
            sum = a[i][j] + (++a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Addition of matrix%d:\n", sum);
        }
    }
}
void subtractmatrix()
{
}
void multiplicationmatrix()
{
}

int main()
{
    int n, i, j, b, a[10][10], m, c, choice, d;
    printf("Enter the how many number of matrix insert:");
    scanf("%d", &c);
    for (b = 0; b < c; b++)
    {
        printf("Enter the number of column & row of matrix:");
        scanf("%d%d", &m, &n);
        printf("Enter the matrix %d:", b + 1);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Matrix %d:\n", b + 1);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
    }
    do
    {
        printf("\n1. Addition of matrix\n2. Subtraction of matrix\n3. Multiplication of matrix\n4. Exit");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addmatrix(a[i][j]);
            break;
        case 2:
            subtractmatrix();
            break;
        case 3:
            multiplicationmatrix();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("Enter the valid choice:");
            break;
        }
    } while (d == 'y');
}