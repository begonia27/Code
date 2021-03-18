// 比较长单词里是否按顺序包含一个短单词的每一个字符；如果包含，将长单词所包含的第一个开始的字符的右下角标显示出来
#include <stdio.h>
#include <stdbool.h>

int findString(const char beSearch[], char search[])
{
    int i, j;
    int index = 0, length = 0;
    bool contain = true;

    for (j = 0; search[j] != '\0'; ++j)
    {
        ++length;
    }

    for (i = 0; beSearch[i] != '\0'; ++i)
    {
        // 输出长字符串中所有字符的内存地址
        // printf("%p\n", beSearch + i);

        for (j = 0; j < length; ++j)
        {
            if (beSearch[i + j] != search[j])
            {
                contain = false;
            }
        }

        if (contain)
        {
            return i;
        }

        // 循环结束后，将contain重置为true,回到一开始的位置，然后再进行下一轮的判断
        contain = true;
    }

    return -1;
}

int main()
{
    int findString(const char beSearch[], char search[]);

    int i = 0;
    int startPoint = 0;

    const char beSearch[] = "a chatterbox";
    const char search[] = "hat";

    startPoint = findString("a chatterbox", "hat");

    printf("%i\n", startPoint);

    return 0;
}
