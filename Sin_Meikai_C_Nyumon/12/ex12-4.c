#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct
{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Student *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j - 1].height > a[j].height)
            {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

void sort_by_name(Student *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (strcmp(a[j - 1].name, a[j].name) > 0)
            {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

int main(void)
{
    int i;
    Student std[] = {
        {"Sato", 178, 61.2, 80000},
        {"Sanaka", 175, 62.5, 73000},
        {"Takao", 173, 86.2, 0},
        {"Mike", 165, 72.3, 70000},
        {"Watanabe", 179, 77.5, 70000}};
    for (i = 0; i < NUMBER; i++)
    {
        printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
    }
    int select;
    printf("0:名前順 1:身長順\n");
    scanf("%d", &select);
    if (select == 0)
    {
        sort_by_name(std, NUMBER);
        puts("\n名前順にソートしました。");
    }
    else
    {
        sort_by_height(std, NUMBER);
        puts("\n身長順にソートしました。");
    }
    for (i = 0; i < NUMBER; i++)
    {
        printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
    }
    return 0;
}