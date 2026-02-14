#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("%d\n", sizeof(1));
    printf("%d\n", sizeof(+1));
    printf("%d\n", sizeof(-1));
    printf("%d\n", sizeof(unsigned) - 1);
    printf("%d\n", sizeof(double) - 1);
    printf("%d\n", sizeof((double)-1));
    printf("%d\n", sizeof(n) + 2);
    printf("%d\n", sizeof(n + 2));
    printf("%d\n", sizeof(n + 2.0));
    return 0;
}