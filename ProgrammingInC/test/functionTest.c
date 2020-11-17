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

// 函数无返回值并且没有参数，函数体内打印一句话
void func1(void)
{
    printf("no parameter no return\n");
}

// 函数无返回值并且传进来两个参数，函数体内对两个参数求和
void func2(int n, int m)
{
    int sum = n + m;

    printf("the sum is %i\n", sum);
}

// 函数无返回值并且无参数，函数体内对两个变量进行求和
void func3(void)
{
    int n = 4;
    int m = 6;
    int sum = n + m;

    printf("the sum is %i\n", sum);
}

// 函数无返回值并且传进来两个参数，这两个参数调用第二个函数
void func4(int p, int q)
{
    func2(p , q);
}

// 函数无返回值并且有两个参数，这两个参数乘以2，并将结果返回给第二个函数
// 函数无返回值并且有两个参数，这两个参数调用第二个函数
void func5(int p, int q)
{
    func2(p * 2, q * 2);
    func2(p, q);
}
