#include <stdio.h>

#define NUM 5

void intary_rcpy(int v1[], const int v2[], int n)
{
    int i, t;
    for (i = 0; i < n; i++)
        v1[i] = v2[n - 1 - i];
}

int main(void)
{
    int array[NUM] = {1, 2, 3, 4, 5};
    int cpy[NUM];
    intary_rcpy(cpy, array, NUM);
    for (int i = 0; i < NUM; i++)
    {
        printf("%d ", cpy[i]);
    }
    return 0;
}