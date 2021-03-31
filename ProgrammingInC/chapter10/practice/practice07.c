#include <stdio.h>

char text[] = "the wrong son";
char insertText[] = "per";

char insertString(char text[], char insertText[], int indexOfInsert, char answer)
{
    int count;

    for (int i = 0; text[i] != '\0'; ++i)
    {
        if (i = 9)
        {
            // 在长字符串中插入需要的字符串，剩余的字符串就是我们要的字符串
            printf("%c", text[i] + "per");
        }
    }
}

int main(void)
{
    char insertString(char text[], char insertText[], int indexOfInsert, char answer);

    char text[] = "the wrong son";
    char insertText[] = "per";
    int result;

    insertString("the wrong son", "per", 10, result);

    return 0;
}
