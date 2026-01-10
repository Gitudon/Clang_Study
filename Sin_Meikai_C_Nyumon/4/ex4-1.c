#include <stdio.h>

int main(void)
{
    int retry;
    do
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
        printf("もう一度？(1...はい/0...いいえ)：");
        scanf("%d", &retry);
    } while (retry == 1);
    return 0;
}