#include <stdio.h>

int main(void)
{
    int step, block;
    puts("下向きピラミッドを作ります。");
    printf("何段ですか：");
    scanf("%d", &step);
    block = 2 * step - 1;
    for (int i = 1; i <= step; i++)
    {
        for (int j = 1; j <= block; j++)
        {
            if (j < i || j > block - i + 1)
                putchar(' ');
            else
                printf("%d", i % 10);
        }
        putchar('\n');
    }
    return 0;
}