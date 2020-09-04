#include <stdio.h>

int main(void)
{
    int ratingCounters[11] = {0}, i, response, counter;

    //要求用户输入一个次数来表示他们能够输入的调查分数的个数
    printf("What counter number do you want to calculate? \n");
    scanf("%i", &counter);

    //写出一个列表的第一列至第十列序号
    for (i = 1; i <= counter; ++i)
    {
        ratingCounters[i] = 0;
    }

    //要求输入评分
    printf("Enter your responses\n");

    //要求用户任意输入任意次数来进行所输入的评分的循环
    for (i = 1; i <= counter; ++i)
    {   
        //要求用户输入评分
        scanf("%i", &response);

        //如果评分是999，那么结束循环
        if (response == 999)
        {
            break;
        }

        //判断评分是否不位于1-10之间，即评分是不是满足小于1或大于10
        else if (response < 1 || response > 10)
        {
            //如果评分满足小于1或大于10，那么就输出相应的提示Bad response
            printf("Bad response %i\n", response);
        }
        
        else
        {   //否则该评分就计入数组循环
            ++ratingCounters[response];
        }
    }

    //输出标题
    printf("\n\nRating Number of Responses\n");
    printf("------ -------------------\n");

    //按照要求输出这个评分数组
    for (i = 1; i <= 10; ++i)
    {   
        //按照空出来的字符间距，输出符合要求的评分数组
        printf("%4i%14i\n", i, ratingCounters[i]);
    }

    return 0;
}
