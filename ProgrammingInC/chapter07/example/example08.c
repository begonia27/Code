#include <stdio.h>

int main (void)
{
    int i, numFibs;

    //询问用户需要计算多少个fibonacci数
    printf("How many Fibonacci numbers do you want (between 1 and 75)? ");
    scanf ("%i", &numFibs);

    //判断如果用户输入的fibonacci数的编号不符合计算的要求，那么就输出相应的提示
    if (numFibs < 1 || numFibs > 75)
    {
        printf("Bad number, sorry!\n");

        //非0的返回值表示程序在运行中发生了错误，如果需要的话，其他的程序可以读取这个值
        return 1;
    }

    //定义一个无符号的超长整型数,无符号代表不能表示负数，即表示的结果都是正数；由于我们计算的值已经超出了int所表示的结果范围，因此必须要加上long long
    unsigned long long int Fibonacci[numFibs];

    Fibonacci[0] = 0; // by definition
    Fibonacci[1] = 1; // ditto

    //为什么i的值要从2开始呢？因为计算fibonacci数必须要有两个值才能计算出结果
    for (i = 2; i < numFibs; ++i)
    {
        //计算fibonacci数的公式如下
        Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];
    }

    //为什么i的值要从0开始呢？因为我们计算的是展示从0开始一直到小于用户输入的numFibs为止的所有fibonacci数
    for (i = 0; i < numFibs; ++i)
    {   
        //最后输出值的时候千万不要忘记一起输出一开始初始化的两个fibonacci数：即Fibonacci[0]和Fibonacci[1]
        printf("%llu ", Fibonacci[i]);
    }

    printf("\n");

    return 0;
}
