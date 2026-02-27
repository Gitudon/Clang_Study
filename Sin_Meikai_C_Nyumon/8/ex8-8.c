#include <stdio.h>

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    return gcd(y, x % y);
}

int main(void)
{
    int x, y;
    printf("整数x：");
    scanf("%d", &x);
    printf("整数y：");
    scanf("%d", &y);
    printf("%dと%dの最大公約数は%dです。\n", x, y, gcd(x, y));
    return 0;
}