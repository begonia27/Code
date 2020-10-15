// 计算二次方程的函数
#include <stdio.h>
#include <math.h>

int a, b, c;
float x, y, result;

void getNumber(void)
{
    printf("Please enter the 1st number to calculate the root of equation: ");
    scanf("%i", &a);

    printf("Please enter the 2nd number to calculate the root of equation: ");
    scanf("%i", &b);

    printf("Please enter the 3rd number to calculate the root of equation: ");
    scanf("%i", &c);
}

float calculateRootOneOfEquation(void)
{
    result = pow(b,2) - 4 * a * c;

    if (result >= 0)
    {
        x = (-b + (sqrt(result))) / (2 * a);
        //千万不要把(-b + (sqrt(result)))中的括号少加或加错地方，不然计算的值有误
    }
    else
    {
        printf("The roots of the equation are complex numbers.\n");
    }
}

float calculateRootTwoOfEquation(void)
{
    result = pow(b,2) - 4 * a * c;

    if (result >= 0)
    {
        y = (-b - (sqrt(result))) / (2 * a);
    }
    else
    {
        printf("The roots of the equation are complex numbers.\n");
    }
}

void printfNumber(void)
{
    printf("the roots one of equation is %f \n", calculateRootOneOfEquation());
    printf("the roots two of equation is %f \n", calculateRootTwoOfEquation());
}

int main(void)
{
    getNumber();
    calculateRootOneOfEquation();
    calculateRootTwoOfEquation();
    printfNumber();

    return 0;
}
