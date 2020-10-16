//判断输入的值是否是质数
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
    int a, n, number, value;
    bool isPrime;

    printf("Please enter a number to calculate and judgment prime: ");
    scanf("%i", &number);

     a = number;

    value = sqrt(number);
    isPrime = true;

    for (n = 2; n < value; ++n)
    {
        if (number % n != 0)
        {
            // 代表是质数
            isPrime = true; 
        }
        else
        {
            // 代表不是质数
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        printf("%i is prime", a);
    }
    else
    {
        printf("%i is not prime", a);
    }
    
    return 0;
}
