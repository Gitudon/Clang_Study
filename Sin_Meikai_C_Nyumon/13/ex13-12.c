#include <time.h>
#include <stdio.h>

char data_file[] = "datetime_2.dat";

typedef struct tm DateTime;

void get_data(void)
{
    FILE *fp;
    if ((fp = fopen(data_file, "r")) == NULL)
    {
        printf("本プログラムを実行するのは初めてですね。\n");
    }
    else
    {
        DateTime dt;
        fscanf(fp, "%d %d %d %d %d %d", &dt.tm_year, &dt.tm_mon, &dt.tm_mday, &dt.tm_hour, &dt.tm_min, &dt.tm_sec);
        printf("ファイルから読み取った日時は%d年%d月%d日%d時%d分%d秒です。\n", dt.tm_year, dt.tm_mon, dt.tm_mday, dt.tm_hour, dt.tm_min, dt.tm_sec);
        fclose(fp);
    }
}

void put_data(void)
{
    FILE *fp;
    time_t t = time(NULL);
    struct tm *lt = localtime(&t);
    if ((fp = fopen(data_file, "w")) == NULL)
    {
        printf("ファイルをオープンできません。\n");
    }
    else
    {
        fprintf(fp, "%d %d %d %d %d %d", lt->tm_year + 1900, lt->tm_mon + 1, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec);
        fclose(fp);
    }
}

int main(void)
{
    get_data();
    put_data();
    return 0;
}