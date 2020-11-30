// 计算两个时间之间相差多长时间
#include <stdio.h>

// 声明函数，声明的时候要加返回类型和参数类型
struct time elapsed_time(struct time time1, struct time time2);

// 定义结构成员
struct time
{
    int hour;
    int minutes;
    int seconds;
};

int main(void)
{
    // 初始化结构成员变量
    struct time time1 = {0,0,0};
    struct time time2 = {0,0,0};
    struct time time3 = {0,0,0};

    // 调用函数，将返回的函数值保存在另一个变量result里，用于接收其值（调用函数的时候不带返回值的类型，也不带参数的类型）
    struct time result = elapsed_time(time1, time2);

    // 输出最终函数值
    printf("The elapsed time is %i hour %i minutes %i seconds\n",
        result.hour, result.minutes, result.seconds);
}

struct time elapsed_time(struct time time1, struct time time2)
{   
    // 第三个成员变量可以不传进来，因此不写在形参列表里
    struct time time3;

    // 向用户询问并获取需要计算的时间数据
    printf("Please enter the first time (hh:mm:ss): ");
    scanf("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);

    printf("Plsase enter the second time (hh:mm:ss): ");
    scanf("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds); 

    // 判断输入的两个时间之间相差多长时间（用时分秒表示长度）
    if (time1.hour || time2.hour != 24)
    {
        time3.hour = time2.hour - time1.hour;
        time3.minutes = time2.minutes - time1.minutes;
        time3.seconds = time2.seconds - time1.seconds;

        if (time3.hour < 0)
        {   
            // hour is a negative number
            time3.hour = time2.hour - time1.hour + 24;
            time3.minutes = time2.minutes - time1.minutes;
            time3.seconds = time2.seconds - time1.seconds;

            if (time3.minutes < 0)
            {   
                // minutes is a negative number
                time3.hour = time2.hour - time1.hour + 23;
                time3.minutes = time2.minutes - time1.minutes + 60;
                time3.seconds = time2.seconds - time1.seconds;

                if (time3.seconds < 0)
                {   
                    // seconds is a negative number
                    time3.hour = time2.hour - time1.hour + 23;
                    time3.minutes = time2.minutes - time1.minutes + 59;
                    time3.seconds = time2.seconds - time1.seconds + 60;
                }
            }
        }

        // 将计算出的成员变量返回
        return time3;
    }
    else
    {   
        // 在是午夜的情况下
        time3.hour = time2.hour - time1.hour + 24;
        time3.minutes = time2.minutes - time1.minutes;
        time3.seconds = time2.seconds - time1.seconds;

        // 将计算出的成员变量返回
        return time3;
    }
}
