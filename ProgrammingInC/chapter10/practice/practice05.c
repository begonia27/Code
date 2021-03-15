// 比较长单词里是否按顺序包含一个短单词的每一个字符；如果包含，将长单词所包含的第一个开始的字符的右下角标显示出来
#include <stdio.h>

int findString(const char beSearch[], char search[])
{
    int i, j;

    for (i = 0; beSearch[i] != '\0'; ++i)
    {
        for (j = 0; search[j] != '\0'; ++j)
        {
            if (beSearch[i] == search[j])
            {
                break;
            }

            ++i;
        }

        return i;
    }
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
