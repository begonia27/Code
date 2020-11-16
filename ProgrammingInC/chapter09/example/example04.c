// 计算下一天日期的程序

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
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month == 12)
    {
        // 年尾
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else
    {
        // 月末
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    return tomorrow; 
}

// 查找一月中日期数的函数
int numberOfDays(struct date d)
{
    int days;
    bool isLeapYear(struct date d);
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31};

    if (isLeapYear && d.month == 2)
    {
        days = 29;
    }
    else
    {
        days = daysPerMonth[d.month - 1];
    }

    return days;
}

// 判断是否为闰年的函数

bool isLeapYear(struct date d)
{
    bool leapYearFlag;

    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
    {   
        // It's a leap year
        leapYearFlag = true;
    }
    else
    {
        // Is's not a leap year
        leapYearFlag = false;
    }
    
    return leapYearFlag;  
}

int main(void)
{
    struct date dateUpdate(struct date today);
    struct date thisDay, nextDay;

    printf("Enter today's date (mm dd yyyy): ");
    scanf ("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

    nextDay = dateUpdate(thisDay);

    printf("Tomorrow's date is %i/%i/%.2i.\n", nextDay.month, nextDay.day, nextDay.year % 100);

    return 0;
}
