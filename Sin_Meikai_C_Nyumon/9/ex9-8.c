#include <stdio.h>

void put_stringr(const char s[])
{
    int length = 0;
    while (s[length])
        length++;
    while (length--)
        putchar(s[length]);
}

int main(void)
{
    char str[128];
    printf("逆転させる文字列を入力してください：");
    scanf("%s", str);
    put_stringr(str);
    return 0;
}