#include <stdio.h>

void adjust_point(int *n)
{
    if (*n < 0)
        *n = 0;
    else if (*n > 100)
        *n = 100;
}

int main(void)
{
    int n;
    printf("整数を入力してください：");
    scanf("%d", &n);
    adjust_point(&n);
    printf("調整後の値は%dです。\n", n);
    return 0;
}