#include <stdio.h>

#define NUMBER 5

int min_of(const int v[], int n)
{
    int i;
    int min = v[0];
    for (i = 1; i < n; i++)
        if (v[i] < min)
            min = v[i];
    return min;
}

int main(void)
{
    int arr[NUMBER] = {23, 45, 12, 67, 34};
    printf("最小値 = %d\n", min_of(arr, NUMBER));
    return 0;
}