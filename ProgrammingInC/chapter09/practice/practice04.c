// 读取用户输入的日期，计算这个日期是星期几
#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

int main(void)
{
    int f(struct date thisDay);
    int g(struct date thisDay);
    int n(void);

    int resultDay = 0;
    struct date thisDay;
    struct month
    {
        char name[7];
    };

    const struct month days[7] = {{"Sun"}, {"Mon"}, {"Tue"},
        {"Wed"}, {"Thur"}, {"Fri"}, {"Sat"}};

    int value = n();

    printf("The date weekend is %s\n", days[value].name);

    return 0;
}

int f(struct date thisDay)
{
    if (thisDay.month <= 2)
    {
        return thisDay.year - 1;
    }
    else
    {
        return thisDay.year;
    }
}

int g(struct date thisDay)
{
    if (thisDay.month <= 2)
    {
        return thisDay.month + 13;
    }
    else
    {
        return thisDay.month + 1;
    }
}

int n(void)
{
    struct date thisDay = {0,0,0};
    int resultDay = 0;

    printf("Please enter the one days (yy:mm:dd): ");
    scanf("%i:%i:%i", &thisDay.year, &thisDay.month, &thisDay.day);

    int N = 1461 * f(thisDay) / 4 + 153 *
        g(thisDay) / 5 + thisDay.day;

    printf("N is %i\n", N);

    resultDay = (N - 621049) % 7;

    return resultDay;
}
