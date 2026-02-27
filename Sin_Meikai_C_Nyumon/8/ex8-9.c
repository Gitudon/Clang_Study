#include <stdio.h>

int main(void)
{
    int ch;
    int cnt = 0;
    while ((ch = getchar()) != EOF)
        if (ch == '\n')
            cnt++;
    printf("行数は%dです。\n", cnt);
    return 0;
}