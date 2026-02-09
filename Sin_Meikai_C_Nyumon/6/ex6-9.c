#include <stdio.h>

#define NUM 5

void rev_intary(int v[], int n)
{
    int i, t;
    for (i = 0; i < n / 2; i++)
    {
        t = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = t;
    }
}

int main(void)
{
    int array[NUM] = {1, 2, 3, 4, 5};
    rev_intary(array, NUM);
    for (int i = 0; i < NUM; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}