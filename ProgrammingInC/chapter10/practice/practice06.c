#include <stdio.h>

char removeString(char text[], int indexOfStart, int countOfDelete, char answer)
{
    int countOfAllString;
    char result;
    int i, j = 0;

    // 输出原字符串的整体
    /*for (countOfAllString = 0; text[countOfAllString] != '\0'; ++countOfAllString)
    {
        //printf("%c", text[countOfAllString]);
    }*/

    for (int i = 0; text[i] != '\0'; ++i)
    {
        if (i >= indexOfStart && i < (indexOfStart + countOfDelete))
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
    char removeString(char text[], int indexOfStart, int countOfDelete, char answer);

    char text[] = "the wrong son";
    int countOfDelete;
    int countOfAllString = 0;
    char result;
    int i, j = 0;

    // 判断要删减的字符串的字符个数和原字符串中字符个数的长度关系
    if (countOfDelete <= countOfAllString)
    {
        removeString("the wrong son", 4, 6, result);
    }
    else
    {
        printf("error.\n");
    }

    return 0;
}
