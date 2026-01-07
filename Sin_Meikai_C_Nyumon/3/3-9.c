#include <stdio.h>

int main(void)
{
    int no;
    printf("整数を入力してください：");
    scanf("%d", &no);
    if (no == 0)
        puts("その値は0です。");
    else if (no > 0)
        puts("その値は正です。");
    else
        puts("その値は負です。");
    return 0;
}