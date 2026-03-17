#include <stdio.h>

int str_chnum(const char *s, int c)
{
    int count = 0;
    while (*s)
    {
        if (*s == c)
            count++;
        s++;
    }
    return count;
}

int main(void)
{
    char str[] = "Hello, world!";
    printf("\"%s\"中の'o'の数：%d\n", str, str_chnum(str, 'o'));
    return 0;
}