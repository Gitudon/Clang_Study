#include <stdio.h>

int main(void)
{
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];
    size_t bytesRead;
    char buffer[BUFSIZ];
    printf("コピー元ファイル名：");
    scanf("%s", sname);
    printf("コピー先ファイル名：");
    scanf("%s", dname);
    if ((sfp = fopen(sname, "rb")) == NULL)
        printf("\aコピー元ファイルをオープンできません。\n");
    else
    {
        if ((dfp = fopen(dname, "wb")) == NULL)
            printf("\aコピー先ファイルをオープンできません。\n");
        else
        {
            while ((bytesRead = fread(buffer, 1, sizeof(buffer), sfp)) > 0)
            {
                fwrite(buffer, 1, bytesRead, dfp);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }

    return 0;
}
