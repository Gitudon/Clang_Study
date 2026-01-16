#include <stdio.h>

int main(void)
{
    int n;
    printf("nの値：");
    scanf("%d", &n);
    int wa = 0;
    for (int i = 1; i <= n; i++)
    {
        wa += i;
    }
    printf("1から%dまでの和は%dです。\n", n, wa);
    return 0;
}