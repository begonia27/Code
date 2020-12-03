// 计算两个时间相差多少时间（用时分秒表示）
#include <stdio.h>

struct time elapsed_time(struct time time1, struct time time2);

struct time
{
    int hour;
    int minutes;
    int seconds;
};

int main(void)
{
    struct time time1 = {0,0,0};
    struct time time2 = {0,0,0};

    struct time result = elapsed_time(time1, time2);

    printf("The elapsed time is %i hour %i minutes %i seconds\n",
        result.hour, result.minutes, result.seconds);
}

struct time elapsed_time(struct time time1, struct time time2)
{
    struct time timeDifference = {0,0,0};
    int time1Final = 0;
    int time2Final = 0;

    printf("Please enter the first time (hh:mm:ss): ");
    scanf("%i: %i: %i", &time1.hour, &time1.minutes, &time1.seconds);

    printf("Please enter the second time (hh:mm:ss) ");
    scanf("%i: %i: %i", &time2.hour, &time2.minutes, &time2.seconds);

    time1Final = time1.hour * 3600 + time1.minutes * 60 + time1.seconds;
    time2Final = time2.hour * 3600 + time2.minutes * 60 + time2.seconds;

    if (time2Final <= time1Final)
    {
        time2Final += 86400;
    }

    int diff = time2Final - time1Final;

    timeDifference.hour = diff / 3600;

    int remain = diff % 3600;
    timeDifference.minutes = remain / 60;
    timeDifference.seconds = remain % 60;

    return timeDifference;
}
