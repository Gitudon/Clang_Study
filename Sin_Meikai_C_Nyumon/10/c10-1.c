#include <stdio.h>

int main(void)
{
    register int x;
    printf("%p\n", &x);
    return 0;
}