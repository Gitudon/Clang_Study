#include <stdio.h>

int combination(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    else if (r == 1)
        return n;
    else
        return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void)
{
    int n, r;
    printf("整数n：");
    scanf("%d", &n);
    printf("取り出す整数の数r：");
    scanf("%d", &r);
    printf("%dC%d = %d\n", n, r, combination(n, r));
    return 0;
}