// 计算数组里面所有元素的和
#include <stdio.h>

int main(void)
{   
    int result = 0;
    int value[2] = {3, 5};

    for (int n = 0; n < 2; ++n)
    {
        result += value[n];
        printf("The array sum is %i\n", result);
    } 

    return 0;
}
