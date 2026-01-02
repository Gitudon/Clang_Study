#include <stdio.h>

int main(void)
{
    int a, b;

    puts("ニつの整数を入力してください。");
    printf("整数１：");
    scanf("%d", &a);
    printf("整数２：");
    scanf("%d", &b);
    printf("それらの和は%dで積は%dです。\n", a + b, a * b);

    return 0;
}