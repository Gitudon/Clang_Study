#include <stdio.h>

void decrement_date(int *year, int *month, int *day)
{
    if (*day > 1)
        (*day)--;
    else
    {
        if (*month > 1)
        {
            (*month)--;
            if (*month == 2)
            {
                if ((*year % 4 == 0 && *year % 100 != 0) || *year % 400 == 0)
                    *day = 29;
                else
                    *day = 28;
            }
            else if (*month == 4 || *month == 6 || *month == 9 || *month == 11)
                *day = 30;
            else
                *day = 31;
        }
        else
        {
            (*year)--;
            *month = 12;
            *day = 31;
        }
    }
}

void increment_date(int *year, int *month, int *day)
{
    if (*month == 2)
    {
        if ((*year % 4 == 0 && *year % 100 != 0) || *year % 400 == 0)
        {
            if (*day < 29)
                (*day)++;
            else
            {
                (*month)++;
                *day = 1;
            }
        }
        else
        {
            if (*day < 28)
                (*day)++;
            else
            {
                (*month)++;
                *day = 1;
            }
        }
    }
    else if (*month == 4 || *month == 6 || *month == 9 || *month == 11)
    {
        if (*day < 30)
            (*day)++;
        else
        {
            (*month)++;
            *day = 1;
        }
    }
    else
    {
        if (*day < 31)
            (*day)++;
        else
        {
            if (*month < 12)
                (*month)++;
            else
            {
                (*year)++;
                *month = 1;
            }
            *day = 1;
        }
    }
}

int main(void)
{
    int year, month, day;
    printf("年を入力してください：");
    scanf("%d", &year);
    printf("月を入力してください：");
    scanf("%d", &month);
    printf("日を入力してください：");
    scanf("%d", &day);
    printf("処理前：%d年%d月%d日\n", year, month, day);
    int next;
    printf("次の日なら1、前の日なら0を入力してください：");
    scanf("%d", &next);
    if (next == 1)
        increment_date(&year, &month, &day);
    else
        decrement_date(&year, &month, &day);
    printf("処理後：%d年%d月%d日\n", year, month, day);
    return 0;
}