// 判断一个字符是否为字母的函数
#include <stdio.h>
#include <stdbool.h>

/* 接收一个字符类型的参数（用ascll码表来判断），看是否属于大小写字母，
    如果是，则返回true；如果不是，则返回false*/
bool alphabetic(const char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// 计算一个字符串中单词数的函数
int countWords(const char string[])
{
    int i, wordCount = 0;

    // 对变量lookingForWord进行声明和初始化，对调用的函数进行声明
    bool lookingForWord = true, alphabetic(const char c);

    for (i = 0; string[i] != '\0'; ++i)
    {
        // 确认是字母
        if (alphabetic(string[i]))
        {
            // 并且属于一个单词
            if (lookingForWord)
            {
                // 将变量的计数增加1
                ++wordCount;

                // 增加后重新将变量设置为不是单词，进而进行判断
                lookingForWord = false;
            }
        }

        // 若找到的字符判断不是字母，则原因可能是由于刚刚判断完一个字母或者还没开始新的字母；由于确定不是字母，所以也就不用进行“单词”的判断了
        else
        {
            lookingForWord = true;
        }
    }

    /* 当所有的字符都被判断完了之后，wordCount的值就是本题中最终题意的要求：计算单词的个数，因此将值返回给调用者即可 */
    return wordCount;
}

int main(void)
{
    // 声明并初始化两个常量字符串
    const char text1[] = "Well, here goes.";
    const char text2[] = "And here we go...again";

    // 声明一个整型变量，并调用判断单词的函数
    int countWords(const char string[]);

    // 打印输出所判断的字符串中包含单词的个数
    printf("%s - words = %i\n", text1, countWords(text1));
    printf("%s - words = %i\n", text2, countWords(text2));

    return 0;
}
