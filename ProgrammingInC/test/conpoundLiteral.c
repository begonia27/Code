// 利用复合字面量计算下一天的日期的函数

#include <stdio.h>
#include <stdbool.h>

struct date
{
    int month;
    int day;
    int year;
};

// 计算下一天日期的函数
struct date dateUpdate(struct date today)
{
    struct date tomorrow;
    int numberOfDays(struct date d);

    if (today.day != numberOfDays(today))
    {
        tomorrow = (struct date){today.month, today.day +1, today.year};
    }
    else
    {
        if (today.month == 12)
        {
            // 年尾
            tomorrow = (struct date){1, 1, today.year + 1};
        }
        else
        {
            // 月末
            tomorrow = (struct date){today.month +1, 1, today.year};
        }

        return tomorrow;
    }
}

// 查找一月中日期数的函数
int numberOfDays(struct date d)
{
    bool isLeapYear(struct date d);
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int day = daysPerMonth[d.month - 1];

    return (isLeapYear(d) == true && d.month == 2) ? day + 1 : day;
}

// 判断是否为闰年的函数

bool isLeapYear(struct date d)
{
    return (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0;
}

int main(void)
{
    struct date dateUpdate(struct date today);
    struct date thisDay, nextDay;

    printf("Enter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

    nextDay = dateUpdate(thisDay);

    printf("Tomorrow's date is %i/%i/%.2i.\n", nextDay.month, nextDay.day, nextDay.year % 100);

    return 0;
}
