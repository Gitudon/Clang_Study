#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    int shifted_a = a << 1;
    int timed_a = a * 2;
    int shifted_b = b >> 1;
    int divided_b = b / 2;
    printf("a = %d, b = %d\n", a, b);
    printf("a << 1 = %d\n", shifted_a);
    printf("a * 2  = %d\n", timed_a);
    printf("b >> 1 = %d\n", shifted_b);
    printf("b / 2  = %d\n", divided_b);
    return 0;
}