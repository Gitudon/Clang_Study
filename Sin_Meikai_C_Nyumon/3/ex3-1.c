#include <stdio.h>

int main(void)
{
    int A, B;
    puts("二つの整数を入力してください：");
    printf("整数A：");
    scanf("%d", &A);
    printf("整数B：");
    scanf("%d", &B);
    if (A % B)
        puts("BはAの約数ではありません。");
    else
        puts("BはAの約数です。");
    return 0;
}