#include <stdio.h>

int main(void)
{
    int from, to, interval;
    printf("何cmから：");
    scanf("%d", &from);
    printf("何cmまで：");
    scanf("%d", &to);
    printf("何cmごと：");
    scanf("%d", &interval);
    float regular_weight;
    for (int cm = from; cm <= to; cm += interval)
    {
        regular_weight = (cm - 100) * 0.9;
        printf("%dcm  %.2fkg\n", cm, regular_weight);
    }
    return 0;
}