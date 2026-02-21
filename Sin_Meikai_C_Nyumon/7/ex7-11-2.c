#include <stdio.h>

int main(void)
{
    int i;
    float x;
    float sum = 0.0;
    for (i = 0; i <= 100; i++)
    {
        x = i / 100.0;
        sum += x;
    }
    printf("合計：%f\n", sum);
    return 0;
}