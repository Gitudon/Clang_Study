#include <stdio.h>
#include <ctype.h>

void del_digit(char *s)
{
    char *p = s;
    while (*s)
    {
        if (!isdigit(*s))
        {
            *p++ = *s;
        }
        s++;
    }
    *p = '\0';
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください: ");
    scanf("%s", str);
    del_digit(str);
    printf("数字を削除した文字列: %s\n", str);
    return 0;
}