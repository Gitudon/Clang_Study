#include <stdio.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main(void)
{
    int a = 50, b = 20, c = 30, d = 40;
    printf("max(max(a, b), max(c, d)) = %d\n", max(max(a, b), max(c, d)));
    printf("max(max(max(a, b), c), d) = %d\n", max(max(max(a, b), c), d));
    return 0;
}