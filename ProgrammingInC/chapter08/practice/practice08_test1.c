// 计算二次方程的函数
#include <stdio.h>
#include <math.h>

int a, b, c;
float result;

void getNumber(void)
{
    printf("Please enter the 1st number to calculate the root of equation: ");
    scanf("%i", &a);

    printf("Please enter the 2nd number to calculate the root of equation: ");
    scanf("%i", &b);

    printf("Please enter the 3rd number to calculate the root of equation: ");
    scanf("%i", &c);
}

float calculateRootOfEquation(void)
{
    result = pow(b,2) - 4 * a * c;
}

void printfNumber(void)
{
    printf("the 1st root of equation is %f \n", calculateRootOfEquation());
}

int main(void)
{
    getNumber();
    calculateRootOfEquation();
    printfNumber();

    return 0;
}
