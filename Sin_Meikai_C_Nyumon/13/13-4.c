#include <time.h>
#include <stdio.h>

char data_file[] = "datetime.dat";

void get_data(void)
{
    FILE *fp;
    if ((fp = fopen(data_file, "r")) == NULL)
    {
        printf("本プログラムを実行するのは初めてですね。\n");
    }
    else
    {
        int year, month, day, h, m, s;
        fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
        printf("前回は%d年%d月%d日%d時%d分%d秒でした。\n", year, month, day, h, m, s);
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