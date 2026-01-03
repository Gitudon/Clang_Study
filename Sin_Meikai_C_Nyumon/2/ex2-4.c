#include <stdio.h>

int main(void)
{
    int intint = 5 * 2;
    double intdouble = 5 / 2.0;
    double doubleint = 5.0 * 2;
    double doubledouble = 5.0 / 2.0;
    printf("5   * 2   = %d\n", intint);
    printf("5   / 2.0 = %f\n", intdouble);
    printf("5.0 * 2   = %f\n", doubleint);
    printf("5.0 / 2.0 = %f\n", doubledouble);
    return 0;
}