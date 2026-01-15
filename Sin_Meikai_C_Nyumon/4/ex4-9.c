#include <stdio.h>

int main(void)
{
    int no;
    printf("正の整数：");
    scanf("%d", &no);
    int i = 0;
    if (no > 0)
    {
        while (i++ < no)
        {
            if (i % 2 == 1)
                putchar('+');
            else
                putchar('-');
        }
        putchar('\n');
    }
    return 0;
}