#include <stdio.h>

int main(void)
{
    double v;
    puts("実数を入力してください。");
    scanf("%lf", &v);
    printf("あなたは%fと入力しましたね。\n", v);
    return 0;
}