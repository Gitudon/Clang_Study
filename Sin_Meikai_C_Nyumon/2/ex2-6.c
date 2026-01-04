#include <stdio.h>

int main(void)
{
    double height;
    printf("身長を入力してください：");
    scanf("%lf", &height);
    double regular_weight = (height - 100) * 0.9;
    printf("標準体重は%.1fです。\n", regular_weight);
    return 0;
}