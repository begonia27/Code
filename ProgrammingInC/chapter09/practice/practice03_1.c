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
    struct time timeStamp = {12,12,12};
    struct time timeDifference = {0,0,0};

    printf("Please enter the first time (hh:mm:ss): ");
    scanf("%i: %i: %i", &time1.hour, &time1.minutes, &time1.seconds);

    printf("Please enter the second time (hh:mm:ss) ");
    scanf("%i: %i: %i", &time2.hour, &time2.minutes, &time2.seconds);

    // 确定时间戳与第一个输入的时间之间的差值
    time1.hour = time1.hour - timeStamp.hour;
    time1.minutes = time1.minutes - timeStamp.minutes;
    time1.seconds = time1.seconds - timeStamp.seconds;

    // 确定时间戳与第二个输入的时间之间的差值
    time2.hour = time2.hour - timeStamp.hour;
    time2.minutes = time2.minutes - timeStamp.minutes;
    time2.seconds = time2.seconds - timeStamp.seconds;

    // 将第一个差值与第二个差值相减，计算出两个差值之间的差值
    timeDifference.hour = time2.hour - time1.hour;
    timeDifference.minutes = time2.minutes - time1.minutes;
    timeDifference.seconds = time2.seconds - time1.seconds;

    return timeDifference;
}
