#include <stdio.h>

int main(void)
{
    int array_a[4][3];
    int array_b[3][4];
    int array_c[4][4];
    int i, j, k;
    printf("4行3列の配列Aの要素を入力してください。\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &array_a[i][j]);
        }
    }
    printf("3行4列の配列Bの要素を入力してください。\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &array_b[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            array_c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                array_c[i][j] += array_a[i][k] * array_b[k][j];
            }
        }
    }
    printf("配列Aと配列Bの積である配列Cの要素は以下の通りです。\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", array_c[i][j]);
        }
        printf("\n");
    }
    return 0;
}