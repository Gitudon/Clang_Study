#include <stdio.h>

int main(void)
{
    int A, B, C;
    printf("三つの整数を入力してください:。\n");
    printf("整数A：");
    scanf("%d", &A);
    printf("整数B：");
    scanf("%d", &B);
    printf("整数C：");
    scanf("%d", &C);
    if (A == B && B == C)
        printf("三つの値は等しいです。\n");
    else if (A == B || B == C || C == A)
        printf("二つの値が等しいです。\n");
    else
        printf("三つの値は異なります。\n");
    return 0;
}