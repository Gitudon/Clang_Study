#include <stdio.h>

#define diff(x, y) ((x) > (y) ? (x) - (y) : (y) - (x))

int main(void)
{
    int n1, n2;
    double x1, x2;
    printf("整数を2つ入力してください。\n");
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);
    printf("n1とn2の差は%dです。\n", diff(n1, n2));
    printf("実数を2つ入力してください。\n");
    printf("x1: ");
    scanf("%lf", &x1);
    printf("x2: ");
    scanf("%lf", &x2);
    printf("x1とx2の差は%fです。\n", diff(x1, x2));
    return 0;
}