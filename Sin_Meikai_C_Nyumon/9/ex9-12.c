#include <stdio.h>

void put_strary(const char s[][128], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
}

void rev_stings(char s[][128], int n)
{
    int i, j;
    char tmp[128];
    for (i = 0; i < n / 2; i++)
    {
        for (j = 0; s[i][j] != '\0'; j++)
            tmp[j] = s[i][j];
        tmp[j] = '\0';
        for (j = 0; s[n - 1 - i][j] != '\0'; j++)
            s[i][j] = s[n - 1 - i][j];
        s[i][j] = '\0';
        for (j = 0; tmp[j] != '\0'; j++)
            s[n - 1 - i][j] = tmp[j];
        s[n - 1 - i][j] = '\0';
    }
}

int main(void)
{
    char cs[2][128] = {"SEC", "ABC"};
    put_strary(cs, 2);
    rev_stings(cs, 2);
    put_strary(cs, 2);
    return 0;
}