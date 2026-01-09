#include <stdio.h>

int main(void)
{
    int A, B;
    printf("ニつの整数を入力してください:。\n");
    printf("整数A：");
    scanf("%d", &A);
    printf("整数B：");
    scanf("%d", &B);
    if (A >= B && A - B <= 10 || B >= A && B - A <= 10)
    {
        printf("それらの差は10以下です。\n");
    }
    else
    {
        printf("それらの差は11以上です。\n");
    }
    return 0;
}