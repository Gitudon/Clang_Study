#include <stdio.h>

void del_digit(char s[])
{
    int i, j;
    for (i = 0; s[i]; i++)
        if (s[i] < '0' || s[i] > '9')
            s[j++] = s[i];
    s[j] = '\0';
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください：");
    scanf("%s", str);
    del_digit(str);
    printf("数字を除いた文字列：%s\n", str);
    return 0;
}