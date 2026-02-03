#include <stdio.h>

int sumup(int n)
{
    int result = 0;
    while (n > 0)
    {
        result += n;
        n--;
    }
    return result;
}

int main(void)
{
    int n;
    printf("整数を入力してください: ");
    scanf("%d", &n);
    printf("1から%dまでの全整数の和は%dです。\n", n, sumup(n));
    return 0;
}