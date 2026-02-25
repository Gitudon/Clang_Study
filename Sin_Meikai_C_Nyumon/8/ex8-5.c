#include <stdio.h>

enum gender
{
    Male,
    Female,
    Etc,
    Invalid_Gender
};

void male(void)
{
    puts("あなたは男性です。");
}

void female(void)
{
    puts("あなたは女性です。");
}

void etc(void)
{
    puts("あなたはその他の性別です。");
}

enum gender select_gender(void)
{
    int tmp;
    do
    {
        puts("あなたの性別を選んでください。");
        printf("0...男性 1...女性 2...その他 3...終了：");
        scanf("%d", &tmp);
    } while (tmp < Male || tmp > Invalid_Gender);
    return tmp;
}

enum season
{
    Spring,
    Summer,
    Autumn,
    Winter,
    Invalid_Season
};

void spring(void)
{
    puts("あなたの好きな季節は春です。");
}

void summer(void)
{
    puts("あなたの好きな季節は夏です。");
}

void autumn(void)
{
    puts("あなたの好きな季節は秋です。");
}

void winter(void)
{
    puts("あなたの好きな季節は冬です。");
}

enum season select_season(void)
{
    int tmp;
    do
    {
        puts("あなたの好きな季節を選んでください。");
        printf("0...春 1...夏 2...秋 3...冬 4...終了：");
        scanf("%d", &tmp);
    } while (tmp < Spring || tmp > Invalid_Season);
    return tmp;
}

int main(void)
{
    enum gender selected_gender;
    puts("自己紹介をお願いします。");
    do
    {
        switch (selected_gender = select_gender())
        {
        case Male:
            male();
            break;
        case Female:
            female();
            break;
        case Etc:
            etc();
            break;
        }
    } while (selected_gender != Invalid_Gender);
    enum season selected_season;
    do
    {
        switch (selected_season = select_season())
        {
        case Spring:
            spring();
            break;
        case Summer:
            summer();
            break;
        case Autumn:
            autumn();
            break;
        case Winter:
            winter();
            break;
        }
    } while (selected_season != Invalid_Season);
    return 0;
}