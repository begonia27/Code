#include <stdio.h>
#include <math.h>

int main(void)
{
    int number, temp, a, b, c, n, m, p, q, count;

    printf("Enter a number:");
    scanf("%i", &number);

    temp = number;
    a = number;
    b = number;
    c = number;

    //计算它是几位数
    while (number != 0) 
    {
        number /= 10;
        count++; 
    }
    //printf("%i\n", count);

    //计算它的最高位n  
    while (temp >= 10) 
    {   
        temp = (temp - (temp % 10)) / 10;
        n = temp;
    }
    //printf("%i\n", n);
    

    //依次得出除了个位数的每一位数m
    while (a >= 10) 
    {
        a = (a - (n * pow(10, count - 1))) / (pow(10, count - 2));
        m = a;
    }
    //printf("%i\n", m);

    while (c >= 100) 
    {
        c = (c - (n * pow(10, count - 1))) / (pow(10, count - 3));
        q = c;
    }
    //printf("%i\n", q);

    //得出个位数p
    while (b >= 10) 
    {
        b = b % 10;
    }
    //printf("%i\n", b);

    printf("the number is %i %i %i %i", n, m, q, b);

    //根据题目要求对输入的数字以英文的形式输出
   do
    {   
        if (n == 0)
        {
            printf("zero ", n);
        }
        else if (n == 1)
        {
            printf("one ", n);
        }
        else if (n == 2)
        {
            printf("two ", n);
        }
        else if (n == 3)
        {
            printf("three ", n);
        }
        else if (n == 4)
        {
            printf("four ", n);
        }
        else if (n == 5)
        {
            printf("five ", n);
        }
        else if (n == 6)
        {
            printf("six ", n);
        }
        else if (n == 7)
        {
            printf("seven ", n);
        }
        else if (n == 8)
        {
            printf("eight ", n);
        }
        else if (n == 9)
        {
            printf("nine ", n);
        }

        if (m == 0)
        {
            printf("zero ", m);
        }
        else if (m == 1)
        {
            printf("one ", m);
        }
        else if (m == 2)
        {
            printf("two ", m);
        }
        else if (m == 3)
        {
            printf("three ", m);
        }
        else if (m == 4)
        {
            printf("four ", m);
        }
        else if (m == 5)
        {
            printf("five ", m);
        }
        else if (m == 6)
        {
            printf("six ", m);
        }
        else if (m == 7)
        {
            printf("seven ", m);
        }
        else if (m == 8)
        {
            printf("eight ", m);
        }
        else if (m == 9)
        {
            printf("nine ", m);
        }

        if (q == 0)
        {
            printf("zero ", q);
        }
        else if (q == 1)
        {
            printf("one ", q);
        }
        else if (q == 2)
        {
            printf("two ", q);
        }
        else if (q == 3)
        {
            printf("three ", q);
        }
        else if (q == 4)
        {
            printf("four ", q);
        }
        else if (q == 5)
        {
            printf("five ", q);
        }
        else if (q == 6)
        {
            printf("six ", q);
        }
        else if (q == 7)
        {
            printf("seven ", q);
        }
        else if (q == 8)
        {
            printf("eight ", q);
        }
        else if (q == 9)
        {
            printf("nine ", q);
        }
        if (b == 0)
        {
            printf("zero ", b);
        }
        else if (b == 1)
        {
            printf("one ", b);
        }
        else if (b == 2)
        {
            printf("two ", b);
        }
        else if (b == 3)
        {
            printf("three ", b);
        }
        else if (b == 4)
        {
            printf("four ", b);
        }
        else if (b == 5)
        {
            printf("five ", b);
        }
        else if (b == 6)
        {
            printf("six ", b);
        }
        else if (b == 7)
        {
            printf("seven ", b);
        }
        else if (b == 8)
        {
            printf("eight ", b);
        }
        else if (b == 9)
        {
            printf("nine ", b);
        }

        number = number / 10;

    } while (number != 0);
    
    return 0;
}
