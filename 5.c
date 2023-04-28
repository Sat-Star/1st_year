#include <stdio.h>
int main()
{
    int i, j, k, m, n, p, q, a[10][10], b[10][10], c[10][10];
    printf("Enter the size of matrix A \n");
    scanf("%d%d", &m, &n);
    printf("Enter the size of matrix B \n");
    scanf("%d%d", &p, &q);
    if (n != p)
        printf("Matrix multiplication is not possible\n");
    else
    {
        printf("Enter the elements of matrix A \n");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        printf("Enter the elements of matrix B \n");
        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                scanf("%d", &b[i][j]);

        for (i = 0; i < m; i++)
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        printf("The resultant matrix c is \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
                printf("%5d", c[i][j]);
            printf("\n");
        }
    }
    return 0;
}
