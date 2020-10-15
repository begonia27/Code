/* 找出两个非负整数的最大公约数，并返回结果的函数 */
#include <stdio.h>

int u, v, a, b, result;

void getNumber(void)
{
    printf("Please enter two number to calculate the greatest common divisor: ");
    scanf("%i %i", &u, &v);

    /* 变量a和b用于将u和v两个变量的值保存起来，如果后面函数里有用到u和v这两个变量时,
    不会因为u和v一开始的值已经在其他函数里面使用过了而被改变，直接用a和b代替即可 */
    a = u;
    b = v;
}

int greatestCommonDivisor()
{
    int temp;

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

void printfNumber(void)
{
    printf("The greatest common divisor of %i and %i is %i\n",
        a, b, greatestCommonDivisor());
    //a和b分别代替了u和v的原始输入值，不会因为gcd()函数使用过而改变，不然显示一开始的用户输入值时就是错误的值
}

int main(void)
{
    getNumber();
    greatestCommonDivisor();
    printfNumber();

    return 0;
}
