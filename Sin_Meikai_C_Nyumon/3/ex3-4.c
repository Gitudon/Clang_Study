#include <stdio.h>

int main(void)
{
    int A, B;
    puts("二つの整数を入力してください：");
    printf("整数A：");
    scanf("%d", &A);
    printf("整数B：");
    scanf("%d", &B);
    if (A == B)
        puts("AとBは等しいです。");
    else if (A > B)
        puts("AはBより大きいです。");
    else if (A < B)
        puts("AはBより小さいです。");
    return 0;
}