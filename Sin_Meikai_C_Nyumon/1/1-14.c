#include <stdio.h>

int main(void)
{
    int n1, n2;
    int wa;

    puts("ニつの整数を入力してください。");
    printf("整数１：");
    scanf("%d", &n1);
    printf("整数２：");
    scanf("%d", &n2);
    wa = n1 + n2;
    printf("それらの和は%dです。\n", wa);

    return 0;
}