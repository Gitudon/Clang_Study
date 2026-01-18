#include <stdio.h>

int main(void)
{
    int i, j;
    int height;
    puts("正方形を作ります。");
    printf("何段ですか：");
    scanf("%d", &height);
    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= height; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}