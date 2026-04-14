#include <stdio.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];
    int lines = 0;
    printf("ファイル名：");
    scanf("%s", fname);
    if ((fp = fopen(fname, "r")) == NULL)
        printf("\aファイルをオープンできません。\n");
    else
    {
        while ((ch = fgetc(fp)) != EOF)
            if (ch == '\n')
                lines++;
        fclose(fp);
        printf("このファイルは%d行です。\n", lines);
    }
    return 0;
}