#include <stdio.h>

int main(void)
{
    FILE *fp;
    char filename[100];
    printf("ファイル名を入力してください：");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL)
        printf("そのファイルは存在しません。\n");
    else
    {
        printf("そのファイルは存在します。\n");
        fclose(fp);
    }
    return 0;
}