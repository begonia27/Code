// 读取用户输入的日期，计算两个日期之间的天数
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
    int g(struct date nextDay);
    int n(void);
    struct date thisDay, nextDay;

    printf("Two days's apart date is %i\n", n());

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

int g(struct date nextDay)
{   
    if (nextDay.month <= 2)
    {
        return nextDay.month + 13;
    }
    else
    {
        return nextDay.month + 1;
    }
}

int n(void)
{   
    struct date thisDay = {0,0,0};
    struct date nextDay = {0,0,0};

    printf("Please enter the number one days (yy:mm:dd): ");
    scanf("%i:%i:%i", &thisDay.year, &thisDay.month, &thisDay.day);

    printf("Please enter the number two days (yy:mm:dd): ");
    scanf("%i:%i:%i", &nextDay.year, &nextDay.month, &nextDay.day);
    
    int N = 1461 * f(thisDay) / 4 + 153 * 
        g(thisDay) / 5 + thisDay.day;

    int M = 1461 * f(nextDay) / 4 + 153 * 
        g(nextDay) / 5 + nextDay.day;

    int apartDayIs = M - N;

    return apartDayIs;
}
