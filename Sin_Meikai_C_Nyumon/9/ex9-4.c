#include <stdio.h>

void null_string(char s[])
{
    s[0] = '\0';
}

int main(void)
{
    char str[100] = "Hello, World!";
    printf("Before: \"%s\"\n", str);
    null_string(str);
    printf("After : \"%s\"\n", str);
    return 0;
}