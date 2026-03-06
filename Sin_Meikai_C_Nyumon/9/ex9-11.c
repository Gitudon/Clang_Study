#include <stdio.h>

#define NUM 100
#define LEN 128

void put_strary(const char s[][LEN], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
}

int input_to_strary(char s[][LEN], int n)
{
    int i;
    for (i = 0; i < NUM; i++)
    {
        printf("s[%d]：", i);
        scanf("%s", s[i]);
        int j = 0;
        while (s[i][j] == '$' && j < 6)
            j++;
        if (j == 5 && s[i][j] == '\0')
        {
            return i;
        }
    }
    return NUM;
}

int main(void)
{
    char cs[NUM][LEN];
    int n = input_to_strary(cs, NUM);
    put_strary(cs, n);
    return 0;
}