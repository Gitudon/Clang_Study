#include <stdio.h>
#include <string.h>

#define NUMBER 10
#define NAME_LEN 100

typedef struct
{
    char name[NAME_LEN];
    float height;
    float weight;
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

int main(void)
{
    FILE *fp;
    char name[100];
    double height, weight;
    int i = 0;
    Student std[NUMBER];
    if ((fp = fopen("hw.dat", "r")) == NULL)
        printf("\aファイルをオープンできません。\n");
    else
    {
        while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3)
        {
            if (i < NUMBER)
            {
                strncpy(std[i].name, name, NAME_LEN - 1);
                std[i].name[NAME_LEN - 1] = '\0';
                std[i].height = height;
                std[i].weight = weight;
                i++;
            }
        }
        sort_by_height(std, i);
        printf("身長順に並べ替えました。\n");
        for (int j = 0; j < i; j++)
        {
            printf("%-10s %5.1fcm %5.1fkg\n", std[j].name, std[j].height, std[j].weight);
        }
        fclose(fp);
    }
    return 0;
}