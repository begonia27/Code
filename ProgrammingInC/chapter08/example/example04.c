// 计算第n个三角形数的函数

#include <stdio.h>

void calculateTriangularNumber(int n)
{
    int i, triangularNumber = 0;

    for (i = 1; i <= n; ++i)
    {
        triangularNumber += i;
    }

    printf("Triangular number %i is %i\n", n, triangularNumber);
}

int main(void)
{
    calculateTriangularNumber(10);
    calculateTriangularNumber(20);
    calculateTriangularNumber(30);

    return 0;
}