#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("この処理系のchar型は");
    if (CHAR_MIN)
        printf("符号付きです。\n");
    else
        printf("符号なしです。\n");
    return 0;
}