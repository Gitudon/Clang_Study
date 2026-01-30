#include <stdio.h>

int main(void)
{
    int tensu[6][2];
    printf("6人の学生の点数を入力してください。\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d番\n", i + 1);
        printf("国語：");
        scanf("%d", &tensu[i][0]);
        printf("数学：");
        scanf("%d", &tensu[i][1]);
    }
    putchar('\n');
    int kokugo_total = 0;
    int sugaku_total = 0;
    for (int i = 0; i < 6; i++)
    {
        kokugo_total += tensu[i][0];
        sugaku_total += tensu[i][1];
    }
    printf("国語の合計点：%d点\n", kokugo_total);
    printf("国語の平均点：%.1f点\n", (double)kokugo_total / 6);
    printf("数学の合計点：%d点\n", sugaku_total);
    printf("数学の平均点：%.1f点\n", (double)sugaku_total / 6);
    printf("～学生ごとの合計点と平均点～\n");
    for (int i = 0; i < 6; i++)
    {
        int total = tensu[i][0] + tensu[i][1];
        double average = (double)total / 2;
        printf("%d番\n合計：%d点\n平均%.1f点\n", i + 1, total, average);
    }
    return 0;
}