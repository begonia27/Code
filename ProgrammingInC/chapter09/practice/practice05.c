// 将用户输入的年月日时分秒进行加一秒的运算，然后进行判断和输出
#include <stdio.h>
#include <stdbool.h>

struct dateAndTime
{
    int year;
    int month;
    int day;
    int hour;
    int minutes;
    int seconds;
};

int main(void)
{
    struct date clockKeeper (struct date dateAndTime);
    struct time timeUpdate(struct time now);
    struct date dateUpdate(struct date today);
    struct date dateUpdate(struct date today);
    struct date thisDay, nextDay;

    printf("Enter now day's date (mm dd yyyy): ");
    scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

    nextDay = dateUpdate(thisDay);

    printf("Tomorrow's date is %i/%i/%.2i.\n", nextDay.month, nextDay.day, nextDay.year % 100);

    return 0;
}

struct date clockKeeper (struct dateAndTime)
{
    timeUpdate();
    dateUpdate();

}

struct timeUpdate(struct time now)
{
    ++now.seconds;

    if (now.seconds == 60)
    {
        now.seconds = 0;
        ++now.minutes;

        if (now.minutes = 60)
        {
            now.minutes = 0;
            ++now.hour;

            if (now.hour == 24)
            {
                now.hour = 0;
                ++now.day;
            }
        }
    }

    return now;
}

struct dateUpdate(struct date now)
{
    struct date tomorrow;
    int numberOfDays (struct date n);

    if (now.day != numberOfDays(today))
    {
        tomorrow.day = now.day + 1;
        tomorrow.month = now.month;
        tomorrow.year = now.year;
    }
    else if (now.month == 12)
    {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = now.year + 1;
    }
    else
    {
        tomorrow.day = 1;
        tomorrow.month = now.month + 1;
        tomorrow.year = now.year;
    }
}

int numberOfDays (struct date d)
{
    int days;
    bool isleapYear (struct date d);
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

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
