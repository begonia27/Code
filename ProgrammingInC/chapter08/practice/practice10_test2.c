//判断输入的值是否是质数
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int getNumber(void);
int judgumentNumber(int number);
void printNumber(void);

int main(void)
{
    int number, n, a;
    bool isPrime;

    a = number;

    getNumber ();
    judgumentNumber(number);
    printNumber();

    return 0;
}

int getNumber(void)
{   
    int number;

    printf("Please enter a number to calculate and judgment prime: ");
    scanf("%i", &number);

    return number;
}

int judgumentNumber(int number)
{
    int n;
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
        else
        {
            // 代表是质数
            isPrime = true;
            return true;
        }
    }
}

void printNumber(void)
{   
    bool isPrime;
    int a, number;
    a = number;

    if (isPrime == true)
    {
        printf("%i is prime", a);
    }
    else
    {
        printf("%i is not prime", a);
    }
}
