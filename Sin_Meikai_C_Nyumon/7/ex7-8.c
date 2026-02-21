#include <stdio.h>

int main(void)
{
    printf("float型のサイズは%dバイトです。\n", sizeof(float));
    printf("double型のサイズは%dバイトです。\n", sizeof(double));
    printf("long double型のサイズは%dバイトです。\n", sizeof(long double));
    return 0;
}