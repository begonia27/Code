/* 计算绝对值的函数 */

#include <stdio.h>

float absoluteValue(float x)
{
    if (x < 0)
    {
        x = -x;
    }

    return x;
}

int main(void)
{
    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float result;

    result = absoluteValue(f1);
    printf ("result = %.2f\n", result);
    printf ("f1 = %.2f\n", f1);

    result = absoluteValue(f2) + absoluteValue(f3);
    printf ("result = %.2f\n", result);

    //在调用函数之前，首先使用类型转换操作符将变量i1转换为浮点数
    result = absoluteValue((float) i1);
    printf ("result = %.2f\n", result);

    /*在调用函数之前，首先使用类型转换操作符将变量i1转换为浮点数，
    如果没有这样做，那么编译器将会自动进行类型转换（编译器根据函数的声明已经得知函数需要的类型参数）*/
    result = absoluteValue(i1);
    printf ("result = %.2f\n", result);

    printf ("%.2f\n", absoluteValue (-6.0) / 4);
    return 0;
}
