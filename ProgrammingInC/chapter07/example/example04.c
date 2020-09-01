#include <stdio.h>
#include <stdbool.h>

// Modified program to generate prime numbers

int main (void)
{
    int p, i, primes[50], primeIndex = 2;
    bool isPrime;

    //将质数2和3保存在数组0和数组1中
    primes[0] = 2;
    primes[1] = 3;

    //数字可以容纳50个元素，p从5开始，每次增加2,展示所有的奇数
    for (p = 5; p <= 50; p = p + 2)
    {   
        //当p是小于等于50的数，则执行本程序
        isPrime = true;
        
        //判断primes[i]数组的值是否超过p的平方根
        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
        {
            if (p % primes[i] == 0)
            {
                isPrime = false;
            }
        }

        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for (i = 0; i < primeIndex; ++i)
    {
        printf("%i ", primes[i]);
    }

    printf("\n");

    return 0;
}
