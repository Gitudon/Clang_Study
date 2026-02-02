#include <stdio.h>

int sqr(int x)
{
    return x * x;
}

int pow4(int x)
{
    return sqr(sqr(x));
}

int main(void)
{
    int x;
    printf("整数を入力してください：");
    scanf("%d", &x);
    printf("4乗した値は%dです。\n", pow4(x));
    return 0;
}