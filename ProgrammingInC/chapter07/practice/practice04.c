#include <stdio.h>

int main (void)
{
    float array[10];
    float average = 0, sum = 0;
    int i;

    for (i = 0; i < 10; ++i)
    {   
        //数组中的元素1.111是我们自行初始化的，也可以初始化为别的数
        array[i] = i * 1.111;
        sum += array[i];

        average = sum / 10;
    }

    printf("%lf\n", average);

    return 0;
}
