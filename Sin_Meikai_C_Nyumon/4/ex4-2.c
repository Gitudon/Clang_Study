#include <stdio.h>

int main(void)
{
    int a, b, tmp;
    int sum = 0;
    printf("2つの整数を入力してください。\n");
    printf("整数a：");
    scanf("%d", &a);
    printf("整数b：");
    scanf("%d", &b);
    if (a > b)
    {
        int t = a;
        a = b;
        b = t;
    }
    tmp = a;
    do
    {
        sum = sum + tmp;
        tmp = tmp + 1;
    } while (tmp <= b);
    printf("%dから%dまでの和は%dです。\n", a, b, sum);
    return 0;
}