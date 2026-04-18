#include <stdio.h>

int main(void)
{
    FILE *fp;
    double array[10];
    for (int i = 0; i < 10; i++)
        array[i] = (i + 1) * 3.14159265358979323846;
    if ((fp = fopen("double.bin", "w")) == NULL)
        printf("\aファイルをオープンできません。\n");
    else
    {
        fwrite(array, sizeof(double), 10, fp);
        fclose(fp);
    }
    if ((fp = fopen("double.bin", "r")) == NULL)
        printf("\aファイルをオープンできません。\n");
    else
    {
        fread(array, sizeof(double), 10, fp);
        for (int i = 0; i < 10; i++)
            printf("ファイルから読み取った数値は%23.21fです。\n", array[i]);
        fclose(fp);
    }
    return 0;
}