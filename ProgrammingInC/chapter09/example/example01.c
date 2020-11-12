// 计算日期是哪天
#include <stdio.h>

int main(void)
{   
    // 建立结构date，定义结构成员month，day， year
    struct date
    {
        int month;
        int day;
        int year;
    };

    // 声明了结构date，定义了变量today
    struct date today;

    // 分别给月、日、年赋值
    today.month = 9;
    today.day = 25;
    today.year = 2004;

    // 输出年月日的值
    printf("Today's date is %i/%i/%.2i.\n", today.month, 
        today.day, today.year % 100);

    return 0;
}
