#include <stdio.h>

int main(void)
{
    printf("等価演算子が生成した1：%d\n", (1 == 1));
    printf("関係演算子が生成した0：%d\n", (1 < 0));
    return 0;
}