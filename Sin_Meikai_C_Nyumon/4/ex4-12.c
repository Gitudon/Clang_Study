#include <stdio.h>

int main(void)
{
    int no;
    do
    {
        printf("正の整数を入力してください：");
        scanf("%d", &no);
        if (no < 0)
            puts("\a正でない数を入力しないでください。");
    } while (no < 0);
    int cnt = 0;
    int buf = no;
    while (no > 0)
    {
        no /= 10;
        cnt++;
    }
    printf("%dは%d桁です。\n", buf, cnt);
    return 0;
}