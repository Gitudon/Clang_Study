#include <stdio.h>

void put_stringn(const char s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int i = 0;
        while (s[i])
            putchar(s[i++]);
    }
}

int main(void)
{
    char str[128];
    int num;
    printf("文字列を入力してください：");
    scanf("%s", str);
    printf("繰り返す回数を入力してください：");
    scanf("%d", &num);
    put_stringn(str, num);
    return 0;
}