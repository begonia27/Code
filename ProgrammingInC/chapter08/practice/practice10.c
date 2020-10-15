//判断输入的值是否是质数
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime;

void getNumber(void)
{
    int number, a;

    printf("Please enter a number to calculate and judgment prime: ");
    scanf("%i", &number);

    a = number;
}

int JudgumentNumber(void)
{
    int number, n, a;

    for (n = 2; n < number; ++n)
    {
        if (number % n != 0)
        {
            isPrime = 1;//代表是质数
        }
        else
        {
            isPrime = 0;//代表不是质数
        }
    }
}

void printNumber()
{
    int a;

    //为什么不直接在JudgumentNumber()函数里面输入这个布尔判断，因为如果输入了，那么会把每一个判断过的复合要求的数都输出；
    if (isPrime)
    {
        printf("%i is prime", a);
    }
    else
    {
        printf("%i is not prime", a);
    }
}

int main()
{
    getNumber();
    JudgumentNumber();
    printNumber();

    return 0;
}
