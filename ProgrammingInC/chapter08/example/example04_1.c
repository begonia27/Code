// 计算第n个三角形数的函数

#include <stdio.h>

int calculateTriangularNumber(int n)
{
    int i, triangularNumber = 0;

    for (i = 1; i <= n; ++i)
    {
        triangularNumber += i;
    }

    return triangularNumber;
}

int main(void)
{
    int n, triangularNumber;

    printf("Triangular number %i is %i\n", 10, calculateTriangularNumber(10));
    printf("Triangular number %i is %i\n", 20, calculateTriangularNumber(20));
    printf("Triangular number %i is %i\n", 50, calculateTriangularNumber(50));
    
    return 0;
}
