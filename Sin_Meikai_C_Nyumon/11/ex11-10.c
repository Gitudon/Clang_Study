#include <stdio.h>

int strtoi(const char *nptr)
{
    int num = 0;
    while (*nptr >= '0' && *nptr <= '9')
    {
        num = num * 10 + (*nptr - '0');
        nptr++;
    }
    return num;
}

long strtol(const char *nptr)
{
    long num = 0;
    while (*nptr >= '0' && *nptr <= '9')
    {
        num = num * 10 + (*nptr - '0');
        nptr++;
    }
    return num;
}

double strtof(const char *nptr)
{
    double num = 0.0;
    while (*nptr >= '0' && *nptr <= '9' || *nptr == '.')
    {
        if (*nptr == '.')
        {
            nptr++;
            double decimal_place = 0.1;
            while (*nptr >= '0' && *nptr <= '9')
            {
                num += (*nptr - '0') * decimal_place;
                decimal_place *= 0.1;
                nptr++;
            }
            break;
        }
        num = num * 10 + (*nptr - '0');
        nptr++;
    }
    return num;
}

int main(void)
{
    char str[128];
    printf("文字列を入力してください：");
    scanf("%s", str);
    printf("整数に変換        : %d\n", strtoi(str));
    printf("長整数に変換      : %ld\n", strtol(str));
    printf("浮動小数点数に変換: %f\n", strtof(str));
    return 0;
}