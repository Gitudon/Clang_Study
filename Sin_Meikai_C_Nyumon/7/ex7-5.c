#include <stdio.h>

int count_bits(unsigned x)
{
    int bits = 0;
    while (x)
    {
        if (x & 1U)
            bits++;
        x >>= 1;
    }
    return bits;
}

int int_bits(void)
{
    return count_bits(~0U);
}

void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

unsigned set_n(unsigned x, int pos, int n)
{
    return x | ((1U << n) - 1) << pos - 1;
}

unsigned reset_n(unsigned x, int pos, int n)
{
    return x & ~(((1U << n) - 1) << (pos - 1));
}

unsigned inverse_n(unsigned x, int pos, int n)
{
    return x ^ (((1U << n) - 1) << (pos - 1));
}

int main(void)
{
    unsigned x, pos, n;
    printf("非負の整数：");
    scanf("%u", &x);
    printf("対象ビット：");
    scanf("%u", &pos);
    printf("範囲      ：");
    scanf("%u", &n);
    printf("\n整数     = ");
    print_bits(x);
    printf("\nセット   = ");
    print_bits(set_n(x, pos, n));
    printf("\nリセット = ");
    print_bits(reset_n(x, pos, n));
    printf("\n反転     = ");
    print_bits(inverse_n(x, pos, n));
    putchar('\n');
    return 0;
}
