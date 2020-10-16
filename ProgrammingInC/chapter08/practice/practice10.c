//判断输入的值是否是质数
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void getNumber(void)
{
    int number, a;

    printf("Please enter a number to calculate and judgment prime: ");
    scanf("%i", &number);

    a = number;
}

int JudgumentNumber(void)
{
    bool isPrime;
    int n, number, value;

    for (n = 2; n < number; ++n)
    {
        if (number % n == 0)
        {
            break;
            // 代表不是质数
            isPrime = false;
        }
        else
        {
            // 代表是质数
            isPrime = true;
        }
    }
}

void printNumber(void)
{
    bool isPrime;
    int a;

    if (isPrime == true)
    {
        /* 此处的a是原始的输入值number,只不过JudgumentNumber()函数里面使用了number,
            为了不改变原始输入值，因此可以用另一个变量a替换number，来使用 */
        printf("%i is prime", a);
    }
    else
    {
        printf("%i is not prime", a);
    }
}

int main(void)
{
    int number, n, a;
    bool isPrime;

    getNumber();
    JudgumentNumber();
    printNumber();

    return 0;
}
