#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct
{
    double x;
    double y;
} Point;

double distance_of(Point pa, Point pb)
{
    return sqrt(sqr(pb.x - pa.x) + sqr(pb.y - pa.y));
}

int main(void)
{
    Point crnt, dist;
    printf("現在地のX座標：");
    scanf("%lf", &crnt.x);
    printf("　　　　Y座標：");
    scanf("%lf", &crnt.y);
    printf("目的地のX座標：");
    scanf("%lf", &dist.x);
    printf("　　　　Y座標：");
    scanf("%lf", &dist.y);
    printf("目的地までの距離は%.2fです。\n", distance_of(crnt, dist));
    return 0;
}