#include <stdio.h>
#include <math.h>

int main(void)
{
    double area;
    printf("正方形の面積      ：");
    scanf("%lf", &area);
    printf("正方形の一辺の長さ：%lf\n", sqrt(area));
    return 0;
}