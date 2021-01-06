#include <stdio.h>
#include <stdbool.h>

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

/* 接收一个字符类型的参数（用ascll码表来判断读入的文本），看是否属于大小写字母，
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
    char text[81];
    int totalWords = 0;

    // 获取文本
    void readLine(char buffer[]);

    // 计数
    int countWords(const char string[]);

    // 完成了输入
    bool endOfText = false;

    printf("Type in your text.\n");
    printf("When you are done, press 'RETURN'.\n\n");

    // 循环检查是否完成了输入
    while (!endOfText)
    {
        readLine(text);

        // 如果读入空字符串（空行），则代表所有的输入结束
        if (text[0] == '\0')
        {
            endOfText = true;
        }
        else
        {
            // 否则单词数继续进行累加
            totalWords += countWords(text);
        }
    }

    printf("\nThere are %i words in the above text.\n", totalWords);

    return 0;
}
