//判断输入的值是否是质数
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int number, a, n;
bool isPrime = true;

void getNumber(void)
{
    printf("Please enter a number to calculate and judgment prime: ");
    scanf("%i", &number);
    a = number;
}

void judgumentNumber(void)
{
    if (number < 2)
    {
        isPrime = false;

        // return代表不返回值，因为返回值类型要写成void类型
        return;
    }

    if (number == 2)
    {
        isPrime = true;
        return;
    }

    if (number % 2 == 0)
    {
        isPrime = false;
        return;
    }

    for (n = 3; n < sqrt(number); n += 2)
    {
        if (number % n == 0)
        {
            isPrime = false;
            // 代表不是质数
            break;
        }
    }
}

void printNumber(void)
{
    if (isPrime == true)
    {
        /* 此处的a是原始的输入值number,只不过judgumentNumber()函数里面使用了number,
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
    getNumber();
    judgumentNumber();
    printNumber();

    return 0;
}
