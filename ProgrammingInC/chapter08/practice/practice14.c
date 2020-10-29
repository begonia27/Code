// 练习第十一题 接收一个数组及其长度为参数，返回值是参数数组中所有元素的和（使用全局变量）
#include <stdio.h>

int arraySum(int value[], int n);
int printfArraySum(int value[], int sum);

int n;

// 注意，变量应该进行初始化（赋值）
int sum = 0;
int result = 0;

int main(void)
{
    int value[3] = {2, 3, 4};

    // 注意，如果函数是一个数组，那么它的调用形式是arraySum(value, 3)这样的，并不是arraySum(value[]，n)这样
    // 注意，函数的名称和数组的名称不要相同，因为它们代表的不是一个东西，应该用不同的变量名进行区分
    printfArraySum(value, 3);

    return 0;
}

int arraySum(int value[], int n)
{
    for (n = 0; n < 3; ++n)
    {
        result += value[n];
    }

    return result;
}

int printfArraySum(int value[], int sum)
{   
    printf("The array sum is %i\n", arraySum(value, 3));
}
