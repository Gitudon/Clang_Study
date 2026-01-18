#include <stdio.h>

int main(void)
{
    int i, j;
    int height, width, tmp;
    puts("横長の長方形を作ります。");
    printf("一辺(その1)：");
    scanf("%d", &height);
    printf("一辺(その2)：");
    scanf("%d", &width);
    if (height > width)
    {
        tmp = height;
        height = width;
        width = tmp;
    }
    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= width; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}