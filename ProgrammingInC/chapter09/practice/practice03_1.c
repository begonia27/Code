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
    struct time timeStamp = {0,0,0};
    struct time timeDifference = {0,0,0};
    int time1Final = 0;
    int time2Final = 0;

    printf("Please enter the first time (hh:mm:ss): ");
    scanf("%i: %i: %i", &time1.hour, &time1.minutes, &time1.seconds);

    printf("Please enter the second time (hh:mm:ss) ");
    scanf("%i: %i: %i", &time2.hour, &time2.minutes, &time2.seconds);

    // 确定时间戳与第一个输入的时间之间的差值
    time1.hour = (time1.hour - timeStamp.hour) * 3600;
    time1.minutes = (time1.minutes - timeStamp.minutes) * 60;
    time1.seconds = time1.seconds - timeStamp.seconds;

    // 将时间戳与第一个输入的时间之间的差值的时分秒相加
    time1Final = time1.hour + time1.minutes + time1.seconds;

    // 确定时间戳与第二个输入的时间之间的差值
    time2.hour = (time2.hour - timeStamp.hour) * 3600;
    time2.minutes = (time2.minutes - timeStamp.minutes) * 60;
    time2.seconds = time2.seconds - timeStamp.seconds;

    // 将时间戳与第二个输入的时间之间的差值的时分秒相加
    time2Final = time2.hour + time2.minutes + time2.seconds;

    // 将第二个差值与第一个差值相减，计算出两个差值之间的差值，用时分秒单位显示
    timeDifference.hour = (time2Final - time1Final) / 3600;
    timeDifference.minutes = ((time2Final - time1Final) % 3600) / 60;
    timeDifference.seconds = ((time2Final - time1Final) % 3600) % 60;

    return timeDifference;
}
