#include <stdio.h>

int scan_print(void)
{
    int tmp;
    do
    {
        printf("正の整数を入力してください：");
        scanf("%d", &tmp);
        if (tmp <= 0)
            printf("\a正でない数を入力しないでください。\n");
    } while (tmp <= 0);
    return tmp;
}

int rev_int(int num)
{
    int tmp = 0;
    if (num > 0)
    {
        do
        {
            tmp = tmp * 10 + num % 10;
            num /= 10;
        } while (num > 0);
    }
    return tmp;
}

int main(void)
{
    int nx = scan_print();
    printf("反転した値は%dです。\n", rev_int(nx));
    return 0;
}