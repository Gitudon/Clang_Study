#include <stdio.h>

int main(void)
{
    int no;
    printf("正の整数を入力してください：");
    scanf("%d", &no);
    for (int i = 1; i <= no; i++)
    {
        printf("%d", i % 10);
    }
    putchar('\n');
    return 0;
}