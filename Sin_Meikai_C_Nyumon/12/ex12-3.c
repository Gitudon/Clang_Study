#include <stdio.h>

struct xyz
{
    int x;
    long y;
    double z;
};

struct xyz scan_xyz(void)
{
    struct xyz temp;
    printf("x：");
    scanf("%d", &temp.x);
    printf("y：");
    scanf("%ld", &temp.y);
    printf("z：");
    scanf("%lf", &temp.z);
    return temp;
}

int main(void)
{
    struct xyz s = {0, 0, 0};
    int x;
    long y;
    double z;
    s = scan_xyz();
    printf("xyz.x = %d\n", s.x);
    printf("xyz.y = %ld\n", s.y);
    printf("xyz.z = %f\n", s.z);
    return 0;
}