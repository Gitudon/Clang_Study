#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ninzu = 0;
    char name[100];
    double height, weight;
    if ((fp = fopen("hw.dat", "w")) == NULL)
        printf("\aファイルをオープンできません。\n");
    else
    {
        while (1)
        {
            printf("名前 身長 体重を入力してください：");
            if (scanf("%s%lf%lf", name, &height, &weight) != 3)
                break;
            fprintf(fp, "%s %5.1f %5.1f\n", name, height, weight);
            ninzu++;
            int end;
            printf("続行...0 終了...1：");
            scanf("%d", &end);
            if (end == 1)
                break;
        }
        fclose(fp);
    }
    return 0;
}