#include <stdio.h>

struct xyz
{
    int x;
    long y;
    double z;
};

struct xyz xyz_of(int x, long y, double z)
{
    struct xyz temp;
    temp.x = x;
    temp.y = y;
    temp.z = z;
    return temp;
}

int main(void)
{
    struct xyz s = {0, 0, 0};
    int x;
    long y;
    double z;
    printf("x：");
    scanf("%d", &x);
    printf("y：");
    scanf("%ld", &y);
    printf("z：");
    scanf("%lf", &z);
    s = xyz_of(x, y, z);
    printf("xyz.x = %d\n", s.x);
    printf("xyz.y = %ld\n", s.y);
    printf("xyz.z = %f\n", s.z);
    return 0;
}