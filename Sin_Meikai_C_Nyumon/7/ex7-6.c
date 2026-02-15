#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned int a = UINT_MAX;
    unsigned int b = 10000;
    printf("a          = %u\n", a);
    printf("b          = %u\n", b);
    printf("a + b      = %u\n", a + b);
    return 0;
}