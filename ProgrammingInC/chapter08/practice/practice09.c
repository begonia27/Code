// 找出两个非负整数的最小公倍数，并返回结果的函数
#include <stdio.h>

int u, v, a, b, temp, result;

void getNumber(void)
{
    printf("Please enter two number to calculate the common divisor: ");
    scanf("%i %i", &u, &v);

    /* 变量a和b用于将u和v两个变量的值保存起来，如果后面函数里有用到u和v这两个变量时,
    不会因为u和v一开始的值已经在其他函数里面使用过了而被改变，直接用a和b代替即可 */
    a = u;
    b = v;
}

int gcd(void)
{
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    // gcd()函数的返回值一定要有
    return u;
}

int leastCommonMultiple()
{
    if (a >= 0 || b >= 0)
    {
        // 此处调用gcd()函数是因为gcd()函数和leastCommonMultiple()函数是平行的，只能调用
        // a和b分别代替了u和v的原始输入值，不会因为gcd()函数使用过而改变，不然计算result时就是错误的值
        result = ((a * b) / gcd());  
    }

    return result;
}

void printfNumber(void)
{   
    printf("The least common multiple of %i and %i is %i\n",
        a, b, leastCommonMultiple());
}

int main(void)
{
    getNumber();
    gcd();
    leastCommonMultiple();
    printfNumber();

    return 0;
}
