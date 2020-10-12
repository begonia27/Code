//演示自动变量与局部变量的使用的程序
#include <stdio.h>

void auto_static(void)
{
    int autoVar = 1;
    static int staticVar = 1;

    printf("automatic = %i, static = %i\n", autoVar, staticVar);

    ++autoVar;
    ++staticVar;
}

int main(void)
{
    int i;
    void auto_static(void);

    for (i = 0; i < 5; ++i)
    {
        auto_static();
    }

    return 0;
}
