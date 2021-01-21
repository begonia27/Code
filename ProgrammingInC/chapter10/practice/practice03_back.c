// 判断一个字符是否为字母的函数
#include <stdio.h>
#include <stdbool.h>

bool isAlpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isNumber(char c)
{
    return c >= '0' && c <= '9';
}

// 计算一个字符串中单词数的函数
int countWords(const char string[])
{
    bool inWord = false;
    bool inNumber = false;
    int dotCount = 0;
    int count = 0;

    for (int i = 0; string[i] != '\0'; ++i)
    {
        // not 状态
        if (!inWord && !inNumber)
        {
            // 碰到字母，进入单词内，计数加一
            if (isAlpha(string[i]))
            {
                inWord = true;

                ++count;
            }
            // 碰到数字，进入数字内，计数加一
            else if (isNumber(string[i]) ||
            // 或者是正负号且下一个是数字
                ((string[i] == '+' || string[i] == '-') && isNumber(string[i + 1])) ||
                (string[i] == '.'))
            {
                inNumber = true;

                ++count;

                if (string[i] == '.')
                {
                    ++dotCount;
                }
            }
        }
        else if (inWord)
        {
            // 碰到非字母，且不是 '\'\ ，退出单词
            if (!isAlpha(string[i]) && string[i] != '\'')
            {
                inWord = false;

                --i;
            }
        }
        else if (inNumber)
        {
            if (!isNumber(string[i]))
            {
                if (string[i] == '.')
                {
                    if (dotCount < 1)
                    {
                        ++dotCount;

                        continue;
                    }
                }
                else if (string[i] == ',')
                {
                    if (dotCount < 1)
                    {
                        continue;
                    }
                }

                inNumber = false;
                dotCount = 0;

                --i;
            }
        }
    }

    return count;
}

int main(void)
{
    // 声明并初始化两个常量字符串
    const char text1[] = "Well, here's goes1111aaa. 6 + 3+3"; //18
    // const char text1[] = "-200";
    const char text2[] = "1.1.1.1 1.1,1.1"; // 29

    // 声明一个整型变量，并调用判断单词的函数
    int countWords(const char string[]);
    bool isSpecialSymbol(int number);


    // 打印输出所判断的字符串中包含单词的个数
    printf("%s - words = %i\n", text1, countWords(text1));
    printf("%s - words = %i\n", text2, countWords(text2));

    return 0;
}
