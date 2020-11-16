#include <stdio.h>

void func1(void);
void func2(int n, int m);
void func3(void);
void func4(int p, int q);
void func5(int p, int q);

int main(void)
{
    int n = 2, m = 3;
    int p = 5, q = 9;
    func1();
    func2(n, m);
    func3();
    func4(p, q);
    func5(p, q);
}

void func1(void)
{
    printf("no parameter no return\n");
}

void func2(int n, int m)
{
    int sum = n + m;

    printf("the sum is %i\n", sum);
}

void func3(void)
{
    int n = 4;
    int m = 6;
    int sum = n + m;

    printf("the sum is %i\n", sum);
}

void func4(int p, int q)
{
    func2(p , q);
}

void func5(int p, int q)
{
    func2(p * 2, q * 2);
    func2(p, q);
}
