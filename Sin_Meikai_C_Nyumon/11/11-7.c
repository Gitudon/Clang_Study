#include <stdio.h>

char *str_copy(char *d, const char *s)
{
    char *t = d;
    while (*d++ = *s++)
        ;
    return t;
}

int main(void)
{
    char *ptr[128] = "1234";
    char tmp[128];
    printf("ptr = \"%s\"\n", ptr);
    printf("コピーするのは：", tmp);
    scanf("%s", tmp);
    str_copy(ptr, tmp);
    puts("コピーしました。");
    printf("ptr = \"%s\"\n", ptr);
    return 0;
}