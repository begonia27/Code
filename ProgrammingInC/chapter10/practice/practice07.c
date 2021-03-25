#include <stdio.h>

char removeString(char text[], char insertText, int countOfInsert, char answer)
{
    for (int i = 0; text[i] != '\0'; ++i)
    {
        if (i >= countOfInsert && i < (indexOfStart + countOfInsert))
        {
            // 根据循环和判断，输出不要的字符串
            // printf("%c\n", text[i]);
        }
        else
        {
            // 在长字符串中去掉不要的字符串，剩余的字符串就是我们要留下来的字符串
            printf("%c", text[i]);
        }
    }
}

int main(void)
{
    char removeString(char text[], char insertText, int countOfInsert, char answer);

    char text[] = "the wrong son";
    int result;

    insertString("the wrong son", "per", 10, result);

    return 0;
}
