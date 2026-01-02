#include <stdio.h>

int main(void)
{
    int x, y;

    puts("ニつの整数を入力してください。");
    printf("整数x：");
    scanf("%d", &x);
    printf("整数y：");
    scanf("%d", &y);
    printf("xの値はyの%d%%です。\n", (x * 100) / y);

    return 0;
}