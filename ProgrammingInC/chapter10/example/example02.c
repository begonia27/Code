// 计算字符串中的字符个数的函数
#include <stdio.h>

// 定义一个返回值为整型的名为stringLength的函数，接收一个为常量字符数组的形参
int stringLength(const char string[])
{
    int count = 0;

    // 定义一个循环，当字符串内的字符不为null字符时，将变量count的值加一
    while (string[count] != '\0')
    {
        ++count;
    }

    // 当循环不满足时（出现null字符时），将变量count的值返回
    return count;
}

int main(void)
{
    // 声明了一个名为stringLength的函数
    int stringLength(const char string[]);

    // 定义函数接收的实参值分别为花括号里的字符值，末尾以null字符结尾
    const char word1[] = {'a', 's', 't', 'e', 'r', '\0'};
    const char word2[] = {'a', 't', '\0'};
    const char word3[] = {'a', 'w', 'e', '\0'};

    // 分别在输出的时候调用三个函数，以整型值的方式输出
    printf("%i %i %i\n", stringLength(word1),
        stringLength(word2), stringLength(word3));

    return 0;
}
