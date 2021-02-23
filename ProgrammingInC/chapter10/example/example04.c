// 检验字符串是否相等的函数
#include <stdio.h>
#include <stdbool.h>

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;

    // 对两个字符串逐字符进行比较
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        ++i;
    }

    // 对两个字符串的末尾字符进行比较，返回布尔类型的值
    if (s1[i] == '\0' && s2[i] == '\0' )
    {
        areEqual = true;
    }
    else
    {
        areEqual = false;
    }

    return areEqual;
}

int main(void)
{
    // 声明一个布尔类型的函数，函数接收两个常量字符串
    bool equalEqual(const char s1[], const char s2[]);

    // 对两个字符串进行赋值
    const char stra[] = "string compare test";
    const char strb[] = "string";

    // 通过调用函数，输出两个字符串的值，进行比较
    printf("%i\n", equalStrings(stra, strb));
    printf("%i\n", equalStrings(stra, stra));
    printf("%i\n", equalStrings(strb, "string"));

    return 0;
}
