#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int getNumber(void);
bool judgumentNumber(int value);
void printfNumber(bool isPrime, int value);

int main(void)
{
    int value;
    bool isPrime;

    value = getNumber();// 把第一个函数返回的值用一个新的变量value存起来
    isPrime = judgumentNumber(value);// 这个isPrime和第二个函数返回的isPrime不是同一个东西，名字本来也可以不一样
    printfNumber(isPrime, value);

    return 0;
}

int getNumber(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%i", &number);

    return number;
}

bool judgumentNumber(int value)
{
    bool isPrime = true;
    int n;

    if (value < 2)
    {
        return false;
    }

    if (value == 2)
    {
        return true;
    }

    if (value % 2 == 0)
    {
        return false;
    }

    for (n = 3; n < sqrt(value); n += 2)
    {
        if (value % n == 0)
        {
            isPrime = false;

            break;
        }
    }

    return isPrime;
}

void printfNumber(bool isPrime, int value)
{
    if (isPrime)
    {
        printf("%i is prime", value);
    }
    else
    {
        printf("%i is not prime", value);
    }
}
