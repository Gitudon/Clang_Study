#include <stdio.h>

int main(void)
{
    char *p = "ABC";
    printf("p = \"%s\"\n", p);
    p = "DEF";
    printf("p = \"%s\"\n", p);
    return 0;
}