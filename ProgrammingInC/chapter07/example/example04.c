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
        //当p是质数，则执行本程序
        isPrime = true;
        
        //isPrime成立并且p大于或等于primes[i]的平方根
        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
        {   
            //当上面的条件成立时，执行这个判断语句
            if (p % primes[i] == 0)
            {   
                //经判断，如果isPrime不是质数，继续外层的for循环，直到不满足循环条件
                isPrime = false;
            }
        }
        
        //如果isPrime是质数
        if (isPrime == true)
        {   
            //则将primeIndex和p的值分别进行赋值
            primes[primeIndex] = p;

            //继续进行primeindex的循环
            ++primeIndex;
        }
    }

    //循环将每个数组的值都打印出来（为什么i < primeIndex？因为数组的元素要小于个数）
    for (i = 0; i < primeIndex; ++i)
    {
        printf("%i ", primes[i]);
    }

    printf("\n");

    return 0;
}
