#include <stdio.h>

#define MAX 100

int main(void)
{
    int data[MAX];
    int num;
    printf("データ数：");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("%d番：", i + 1);
        scanf("%d", &data[i]);
    }
    putchar('{');
    for (int i = 0; i < num; i++)
    {
        printf("%d", data[i]);
        if (i < num - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");
    return 0;
}