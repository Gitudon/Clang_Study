#include <stdio.h>

int main(void)
{
    float a;
    double b;
    long double c;
    printf("a：");
    scanf("%f", &a);
    printf("b：");
    scanf("%f", &b);
    printf("c：");
    scanf("%Lf", &c);
    printf("a = %f\n", a);
    printf("b = %f\n", b);
    printf("c = %Lf\n", c);
    return 0;
}