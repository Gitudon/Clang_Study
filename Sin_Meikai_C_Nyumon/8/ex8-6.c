#include <stdio.h>

int factorial(int n)
{
    int tmp = 1;
    for (int i = 1; i <= n; i++)
    {
        tmp *= i;
    }
    return tmp;
}

int main(void)
{
    int num;
    printf("整数を入力してください：");
    scanf("%d", &num);
    printf("%dの階乗は%dです。\n", num, factorial(num));
    return 0;
}