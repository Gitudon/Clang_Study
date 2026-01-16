#include <stdio.h>

int main(void)
{
    int no;
    printf("何個*を表示しますか：");
    scanf("%d", &no);
    for (int i = 1; i <= no; i++)
    {
        putchar('*');
        if (i % 5 == 0)
            putchar('\n');
    }
    if (no % 5 != 0)
        putchar('\n');
    return 0;
}