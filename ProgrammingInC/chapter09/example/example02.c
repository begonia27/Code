// 计算用户输入的日期的下一天是哪天
#include <stdio.h>

int main(void)
{
    // 建立数组结构date，包含结构的成员month，day，year
    struct date
    {
        int month;
        int day;
        int year;
    };

    // 声明结构date，定义了变量：today和tomorrow
    struct date today, tomorrow;

    // 定义了包含每月天数的数组常量daysPerMonth
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 
        31, 31, 30, 31, 30, 31};

    // 提示用户输入今天的年月日
    printf("Enter today's date(mm dd yyyy): ");

    // 获取用户输入今天的年月日
    scanf("%i%i%i", &today.month, &today.day, &today.year);

    /* 判断用户输入的日期是不是每个月的最后一天（为什么要根据每个月有多少天来判断是不是最后一天呢？
        因为每个月都是从1号开始计算的，而从每个月的最后一天的日期恰好就是每个月一共拥有的天数的数字） */
    if (today.day != daysPerMonth[today.month - 1])
    {   
        // 若输入的日期数字不是月末最后一天，则将日期数加1，而月份数和年份数保持不变，都还是用户输入的数字
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year  = today.year;
    }

    // 否则若输入数字为年尾（并且已经满足了是月末最后一天）
    else if (today.month == 12)
    {
        // 则日期数为1，月份数为1，年份数加1
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }

    // 排除不是月末和不是年尾这两种特殊情况后
    else
    {
        // 则日期是1，月份数是加1，年份数不变
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    // 输出由用户输入的年月日值计算所得的下一天是哪天
    printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, 
        tomorrow.day, tomorrow.year % 100);

    return 0;
}
