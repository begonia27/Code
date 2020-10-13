// 计算某数平方根的函数

#include <stdio.h>
#define PEPSILON 0.00001

float absoluteValue(float x)
{
    if (x < 0)
    {
        x = -x;
    }

    return (x);
}

// 计算某数平方根的函数
// 变量epsilon用于保存判断循环结束的极限条件值
float squareRoot(float x)
{
    float guess = 1.0;

    while (absoluteValue(guess * guess - x) >= PEPSILON)
    {
        guess = (x / guess + guess) / 2.0;
        printf("squareRoot (%.1f) = %f\n", x, guess);
    }

    return guess;
}

int main(void)
{
    (squareRoot (2.0));
    printf("\n");
    
    (squareRoot (144.0));
    printf("\n");
    (squareRoot (17.5));

    return 0;
}