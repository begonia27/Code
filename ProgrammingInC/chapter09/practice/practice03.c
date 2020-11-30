// 计算两个时间之间相差多长时间
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
    struct time time3 = {0,0,0};

    struct time result = elapsed_time(time1, time2);

    printf("The elapsed time is %i hour %i minutes %i seconds\n",
        result.hour, result.minutes, result.seconds);
}

struct time elapsed_time(struct time time1, struct time time2)
{   
    struct time time3;

    printf("Please enter the first time (hh:mm:ss): ");
    scanf("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);

    printf("Plsase enter the second time (hh:mm:ss): ");
    scanf("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds); 

    if (time1.hour || time2.hour != 24)
    {
        time3.hour = time2.hour - time1.hour;
        time3.minutes = time2.minutes - time1.minutes;
        time3.seconds = time2.seconds - time1.seconds;

        if (time3.hour < 0)
        {   
            // hour is negative number
            time3.hour = time2.hour - time1.hour + 24;
            time3.minutes = time2.minutes - time1.minutes;
            time3.seconds = time2.seconds - time1.seconds;

            if (time3.minutes < 0)
            {   
                // hour is negative number
                time3.hour = time2.hour - time1.hour + 23;
                time3.minutes = time2.minutes - time1.minutes + 60;
                time3.seconds = time2.seconds - time1.seconds;

                if (time3.seconds < 0)
                {   
                    // hour is negative number
                    time3.hour = time2.hour - time1.hour + 23;
                    time3.minutes = time2.minutes - time1.minutes + 59;
                    time3.seconds = time2.seconds - time1.seconds + 60;
                }
            }
        }

        return time3;
    }
    else
    {
        time3.hour = time2.hour - time1.hour + 24;
        time3.minutes = time2.minutes - time1.minutes;
        time3.seconds = time2.seconds - time1.seconds;

        return time3;
    }
}
