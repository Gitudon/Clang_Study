#include <stdio.h>

int main(void)
{
    int step, block;
    puts("ピラミッドを作ります。");
    printf("何段ですか：");
    scanf("%d", &step);
    block = 2 * step - 1;
    for (int i = 1; i <= step; i++)
    {
        for (int j = 1; j <= block; j++)
        {
            if (j <= step - i || j >= step + i)
                putchar(' ');
            else
                putchar('*');
        }
        putchar('\n');
    }
    return 0;
}