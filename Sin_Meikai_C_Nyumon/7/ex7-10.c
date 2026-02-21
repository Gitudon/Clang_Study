#include <stdio.h>

int main(void)
{
    int i;
    float x_1, x_2;
    x_1 = 0.0;
    for (i = 0; i <= 100; i++)
    {
        printf("x = %f ", x_1);
        x_1 += 0.01;
        x_2 = i / 100.0;
        printf("x = %f\n", x_2);
    }
    return 0;
}