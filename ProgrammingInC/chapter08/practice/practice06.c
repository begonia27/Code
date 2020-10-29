// 计算某数平方根的函数
#include <stdio.h>
#define PEPSILON 0.000000000000001

double absoluteValue(double x)
{
    if (x < 0)
    {
        x = -x;
    }

    return (x);
}

// 计算某数平方根的函数
// 变量epsilon用于保存判断循环结束的极限条件值
double squareRoot(double x)
{
    double guess = 1.000000000000000;

    while (absoluteValue(guess * guess - x) >= PEPSILON)
    {
        guess = (x / guess + guess) / 2.000000000000000;
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