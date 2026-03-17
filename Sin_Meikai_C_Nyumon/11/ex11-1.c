#include <stdio.h>

int main(void)
{
    char *p = "ABC";
    printf("p = \"%s\"\n", p);
    p = "456" + 1;
    printf("p = \"%s\"\n", p);
    return 0;
}