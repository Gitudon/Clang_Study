#include <stdio.h>

#define NUMBER 100

int main(void)
{
    int i = 0;
    int tmp = 0;
    char s[NUMBER][128];
    for (i = 0; i < NUMBER; i++)
    {
        printf("s[%d]：", i);
        scanf("%s", s[i]);
        int j = 0;
        while (s[i][j] == '$' && j < 6)
            j++;
        if (j == 5 && s[i][j] == '\0')
        {
            tmp = i;
            break;
        }
    }

    for (i = 0; i < tmp; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
    return 0;
}