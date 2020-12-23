#include <stdio.h>

int main(void)
{
    int i;
    char line[81];
    void readLine(char buffer[]);

    // for循环中调用一个名为readLine的函数，其实参为line，并输出line字符串
    for (i = 0; i < 3; ++i)
    {
        readLine(line);
        printf("%s\n\n", line);
    }

    return 0;
}

// 从终端读入一行文字的函数
void readLine(char buffer[])
{
    // 声明一个字符类型的变量
    char character;

    // 声明并初始化一个整型的变量
    int i = 0;

    // 使用do循环，将读入字符的getchar函数赋给变量character
    do
    {
        character = getchar();

        // 将变量赋给字符数组，并将字符的右下角标加1
        buffer[i] = character;
        ++i;

    // 每当遇到一个换行符，该循环就终止
    } while (character != '\n');

    // 字符数组的最后一个字符就是空字符，因为字符个数除了输入的个数外，还要在结尾加一个空字符
    buffer[i - 1] = '\0';
}
