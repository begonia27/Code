//判断输入的值是否是质数
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int getNumber(void)
{
    int number;
    printf("Please enter a number to calculate and judgment prime: ");
    scanf("%i", &number);
   
    return number;
}

int judgumentNumber(int number, int n)
{
    bool isPrime = true;

    if (number < 2)
    {
        isPrime = false;
        return false;
    }

    if (number == 2)
    {
        isPrime = true;
        return true;
    }

    if (number % 2 == 0)
    {
        isPrime = false;
        return false;
    }

    for (n = 3; n < sqrt(number); n += 2)
    {
        if (number % n == 0)
        {
            // 代表不是质数
            isPrime = false;

            break;
        }
    }
}

void printNumber(void)
{   
    int a, number;
    bool isPrime;

    a = getNumber();

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
    int number, n, a;
    bool isPrime;

    a = number;
    
    getNumber();
    judgumentNumber(number, n);
    printNumber();

    return 0;
}
