#include <stdio.h>

char *str_chr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return (char *)s;
        s++;
    }
    return NULL;
}

int main(void)
{
    char str[] = "Hello, World!";
    char *ptr = str_chr(str, 'o');
    printf("\"%s\"中で'o'が初めて出てくる位置へのポインタ：%s\n", str, ptr);
    return 0;
}