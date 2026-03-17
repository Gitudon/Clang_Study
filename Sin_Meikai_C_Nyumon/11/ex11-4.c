#include <stdio.h>

void put_string(const char *s)
{
    while (*s)
        putchar(*s++);
}

int main(void)
{
    char str[] = "Hello, world!";
    put_string(str);
    return 0;
}