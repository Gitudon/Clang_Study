#include <stdio.h>

int str_char(const char s[], int c)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return i + 1;
        }
        i++;
    }
    return -1;
}

int main(void)
{
    char str[100] = "Hello, World!";
    printf("String         : \"%s\"\n", str);
    printf("Position of 'o': %d\n", str_char(str, 'o'));
    printf("Position of 'x': %d\n", str_char(str, 'x'));
    return 0;
}