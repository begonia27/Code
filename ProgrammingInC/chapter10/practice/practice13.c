// 将字符串中的小写字母转换为对应的大写字母
#include <stdio.h>

void uppercase(char letter[])
{
    int i;

    for (int i = 0; letter[i] != '\0'; ++i)
    {
        printf("%c ", letter[i]);

        if (letter[i] >= 'a' && letter[i] <= 'z')
        {
            letter[i] -= 32;
            printf("%c", letter[i]);
        }
        else
        {
            printf("%c", letter[i]);
        }
    }
}

int main(void)
{
    void uppercase(char letter[]);
    int i;

    char letter[] = "abcdefg";

    uppercase("abcdefg");

    return 0;
}
