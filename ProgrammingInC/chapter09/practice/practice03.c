// 计算两个时间之间相差多长时间
#include <stdio.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};

int main(void)
{
    struct time elapsed_time(struct time time1, struct time time2,
        struct time time3);
    
    struct time elapsed_time(time1, time2, time3);

    printf("The elapsed time is %i \n",
        time3.hour, time3.minutes, time3.seconds);
}

struct time elapsed_time(struct time time1, struct time time2, struct time time3)
{   
    struct time time1 = {0,0,0};
    struct time time2 = {0,0,0};
    struct time time3 = {0,0,0};

    printf("Please enter the time (hh:mm:ss): ");
    scanf("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);

    printf("Plsase enter the time (hh:mm:ss): ");
    scanf("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds); 

    if (time1.hour || time2.hour != 24)
    {
        time3.hour = time2.hour - time1.hour;
        time3.minutes = time2.minutes - time1.minutes;
        time3.seconds = time2.seconds - time1.seconds;

        return time3;
    }
    else
    {   
        // midnight
        time3.hour = time2.hour - time1.hour + 24;
        time3.minutes = time2.minutes - time1.minutes;
        time3.seconds = time2.seconds - time1.seconds;

        return time3;
    }
}
