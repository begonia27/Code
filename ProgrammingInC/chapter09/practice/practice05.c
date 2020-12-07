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
    struct date clockKeeper(struct dateAndTime change);
    struct dateAndTime change(void);
    struct date timeUpdate(struct time now);
    struct date dateUpdate(struct date timeUpdate);

    result = struct date clockKeeper(struct dateAndTime change);
    printf("The next time is %i %i %i %i %i %i.\n", result.year, result.month, result.day,
        result.hour, result.minutes, result.seconds);

    return 0;
}

struct date clockKeeper(struct dateAndTime change)
{
    timeUpdate();
    change();

    return clockKeeper;
}

struct dateAndTime change(void)
{
    nextTime = timeUpdate(nowTime);
}

struct date timeUpdate(struct time now)
{
    struct time nowTime, nextTime;

    printf("Please enter a time (yy mm dd hh mm ss) to calculate next time.\n");
    scanf("%i %i %i %i %i %i", &nowTime.year, &nowTime.month, &nowTime.day,
        &nowTime.hour, &nowTime.minutes, &nowTime.seconds);

    ++now.seconds;

    if (now.seconds == 60)
    {
        now.seconds = 0;
        ++now.minutes;

        if (now.minutes == 60)
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

struct date dateUpdate(struct date timeUpdate)
{
    if (now.day == 31)
    {
        now.day = 1;
        ++now.month;

        if (now.month == 12)
        {
            now.month = 0;
            ++now.year;
        }
    }

    return now;
}
