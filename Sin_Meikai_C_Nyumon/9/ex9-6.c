#include <stdio.h>

int str_chnum(const char s[], int c)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    return count;
}

int main(void)
{
    char str[100] = "Hello, World!";
    printf("String         : \"%s\"\n", str);
    printf("Number of 'l'  : %d\n", str_chnum(str, 'l'));
    printf("Number of 'z'  : %d\n", str_chnum(str, 'z'));
    return 0;
}