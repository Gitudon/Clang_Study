#include <stdio.h>

void alert(int n)
{
    while (n-- > 0)
    {
        putchar('\a');
    }
}

int main(void)
{
    int n;
    printf("整数を入力してください: ");
    scanf("%d", &n);
    printf("%d回警報を鳴らします。\n", n);
    alert(n);
    return 0;
}