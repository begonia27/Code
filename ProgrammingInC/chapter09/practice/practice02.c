// 读取用户输入的日期，计算两个日期之间的天数
#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

int f(struct date thisDay)
{
    int N1 = 1461 * (thisDay.year) / 4 + 153 *
        (thisDay.month) / 5 + thisDay.day;

    if (thisDay.month <= 2)
    {
        thisDay.year = thisDay.year - 1;
    }
    else
    {
        thisDay.year = thisDay.year;
    }

    return N1;
}

int g(struct date nextDay)
{
    int N2 = 1461 * (nextDay.year) / 4 + 153 *
        (nextDay.month) / 5 + nextDay.day;

    if (nextDay.month <= 2)
    {
        nextDay.month = nextDay.month + 13;
    }
    else
    {
        nextDay.month = nextDay.month + 1;
    }

    return N2;
}

int main(void)
{
    struct date thisDay, nextDay;

    int apartDayIs, N1, N2;

    printf("Please enter one days (yy:mm:dd): ");
    scanf("%i:%i:%i", &thisDay.year, &thisDay.month, &thisDay.day);

    printf("Please enter two days (yy:mm:dd): ");
    scanf("%i:%i:%i", &nextDay.year, &nextDay.month, &nextDay.day);

    int f(struct date thisDay);
    int g(struct date nextDay);

    apartDayIs = N2 - N1;

    printf("Two days's apart date is %i\n", apartDayIs);

    return 0;
}
