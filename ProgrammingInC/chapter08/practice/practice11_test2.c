/* 编写一个名为 arraySum的函数，该函数接收一个数组及其长度作为参数，
    返回值是参数数组中所有元素的和 */
#include <stdio.h>

int arraySum(int value[], int n);

int main(void)
{   
    int sum = 0;
    int n;
    int value[2] = {3, 5};

    sum = arraySum(value, 2);

    printf("The array sum is %i\n", sum);

    return 0;
}

int arraySum(int value[], int n)
{
    int result = 0;

    for (n = 0; n < 2; ++n)
    {
        result += value[n];
    }
    
    return result;
}
