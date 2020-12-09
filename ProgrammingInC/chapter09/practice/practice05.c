// 将用户输入的年月日时分秒进行加一秒的运算，然后进行判断和输出
#include <stdio.h>
#include <stdbool.h>

struct dateAndTime timeUpdate(struct dateAndTime nowTime);
struct dateAndTime dateUpdate(struct dateAndTime nowTime);
int numberOfDays(struct dateAndTime d);
bool isLeapYear(struct dateAndTime d);
struct dateAndTime clockKeeper(struct dateAndTime nowTime);

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
    struct dateAndTime nowTime = {0,0,0,0,0,0};
    struct dateAndTime nextTime = {0,0,0,0,0,0};

    nextTime = clockKeeper(nowTime);

    printf("The next time is %i %i %i %i %i %i\n", nextTime.year, nextTime.month, nextTime.day,
        nextTime.hour, nextTime.minutes, nextTime.seconds);

    return 0;
}

struct dateAndTime timeUpdate(struct dateAndTime nowTime)
{
    printf("Please enter a time (yy mm dd hh mm ss) to calculate next time:\n");
    scanf("%i %i %i %i %i %i", &nowTime.year, &nowTime.month, &nowTime.day,
        &nowTime.hour, &nowTime.minutes, &nowTime.seconds);

    ++nowTime.seconds;

    if (nowTime.seconds == 60)
    {
        nowTime.seconds = 0;
        ++nowTime.minutes;

        if (nowTime.minutes == 60)
        {
            nowTime.minutes = 0;
            ++nowTime.hour;

            if (nowTime.hour == 24)
            {
                nowTime.hour = 0;
            }
        }
    }

    return nowTime;
}

struct dateAndTime dateUpdate(struct dateAndTime nowTime)
{
    // 是月末最后一天
    if (nowTime.day == numberOfDays(nowTime))
    {
        nowTime.day = 1;

        // 是年尾最后一个月
        if (nowTime.month == 12)
        {
            nowTime.month = 1;
            ++nowTime.year;
        }
        else
        {
            ++nowTime.month;
        }
    }
    else
    {
        ++nowTime.day;
    }

    return nowTime;
}

// 查找一月中日期数的函数
int numberOfDays(struct dateAndTime d)
{
    int days;
    bool isLeapYear(struct dateAndTime d);
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31};

    if (isLeapYear(d) && d.month == 2)
    {
        days = 29;
    }
    else
    {
        days = daysPerMonth[d.month - 1];
    }

    return days;
}

// 判断是否是闰年
bool isLeapYear(struct dateAndTime d)
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

struct dateAndTime clockKeeper(struct dateAndTime nowTime)
{
    nowTime = timeUpdate(nowTime);
    nowTime = dateUpdate(nowTime);

    return nowTime;
}
