// 找出数组中最小元素的数

#include <stdio.h>

//函数接收了一个长度为10的整型数组作为参数
int minimum(int values[10])
{
    //minValue用来存储数组中的最小值
    int minValue, i;

    minValue = values[0];

    //使用数组中的其他元素依次与变量minValue进行比较
    for (i = 1; i < 10; ++i)
    {
        //如果数组元素values[i]的值小于minValue,那么我们就找到了一个新的最小值
        if (values[i] < minValue)
        {
            //将minValue的值重新设置为values[i]
            minValue = values[i];
        }
    }

    return minValue;
}

int main(void)
{
    int scores[10], i, minScore;

    //告诉编译器minimum函数接收一个长度为10的整型数组作为参数，其返回值为整型数
    int minimum(int values[10]);
    
    //提示用户输入10个整型数
    printf("Enter 10 scores\n");

    //通过循环读入用户输入的10个整型数，数组下标分别是0-9
    for (i = 0; i < 10; ++i)
    {
        //每次循环使用scanf函数读取下标与循环变量对应的数组元素
        scanf("%i", &scores[i]);
    }

    //程序调用minimum函数，并将数组作为参数传递给它
    minScore = minimum(scores);
    printf("\nMinimum score is %i\n", minScore);

    return 0;
}
