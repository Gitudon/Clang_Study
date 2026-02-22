#include <stdio.h>

#define swap(type, x, y) \
    do                   \
    {                    \
        type temp = (x); \
        (x) = (y);       \
        (y) = temp;      \
    } while (0)

int main(void)
{
    int a = 10, b = 20;
    swap(int, a, b);
    printf("a = %d, b = %d\n", a, b);
    double x = 1.5, y = 2.5;
    swap(double, x, y);
    printf("x = %.1f, y = %.1f\n", x, y);
    return 0;
}