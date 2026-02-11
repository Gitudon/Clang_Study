#include <stdio.h>

#define NUMBER 10

int search_idx(const int v[], int idx[], int key, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == key)
            idx[count] = i;
        else
            idx[count] = 0;
        count++;
    }
    return count;
}

int main(void)
{
    int v[NUMBER] = {1, 7, 5, 7, 2, 4, 7};
    int idx[NUMBER];
    int key = 7;
    int count = search_idx(v, idx, key, NUMBER);
    printf("%dと一致する要素は%d個あります。\n", key, count);
    for (int i = 0; i < count; i++)
    {
        if (idx[i] != 0)
            printf("v[%d] = %d\n", idx[i], v[idx[i]]);
    }
    return 0;
}