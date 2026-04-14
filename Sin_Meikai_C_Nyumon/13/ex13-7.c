#include <stdio.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];
    printf("ファイル名：");
    scanf("%s", fname);
    int num_chars = 0;
    if ((fp = fopen(fname, "r")) == NULL)
        printf("\aファイルをオープンできません。\n");
    else
    {
        while ((ch = fgetc(fp)) != EOF)
            if ('0' <= ch && ch <= '9')
                num_chars++;
        fclose(fp);
        printf("ファイル\"%s\"には数字が%d個含まれています。\n", fname, num_chars);
    }
    return 0;
}