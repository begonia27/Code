// 比较长单词的每一个字符是否和短单词的第一个字符一致
#include <stdio.h>

int main()
{
    int i = 0;

    const char beSearch[] = "a chatterbox";
    const char search[] = "hat";

    for (i = 0; beSearch[i] != '\0' || search[i] != '\0'; ++i)
    {
        if (beSearch[i] == search[0])
        {
            printf("%i\n", i);
        }
    }

    return 0;
}
