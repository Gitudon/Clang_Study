#include <stdio.h>

void put_string(const char s[])
{
    int i = 0;
    while (s[i])
        putchar(s[i++]);
}

void rev_string(char s[])
{
    int i = 0, j;
    while (s[i])
        i++;
    for (j = 0; j < i / 2; j++)
    {
        char temp = s[j];
        s[j] = s[i - j - 1];
        s[i - j - 1] = temp;
    }
}

int main(void)
{
    char str[128];
    printf("逆転させる文字列を入力してください：");
    scanf("%s", str);
    rev_string(str);
    printf("逆転後の文字列：");
    put_string(str);
    putchar('\n');
    return 0;
}