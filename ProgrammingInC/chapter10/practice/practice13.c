// 将字符串中的小写字母转换为对应的大写字母(也可以把大写转换成小写)
#include <stdio.h>

void uppercase(char letter[])
{
    for (int i = 0; letter[i] != '\0'; ++i)
    {
        if (letter[i] >= 'a' && letter[i] <= 'z')
        {
            // letter[i] = letter[i] - 32;
            printf("%c", letter[i] - 32);
        }
        else
        {
            letter[i] = letter[i] + 32;
            printf("%c", letter[i]);
        }
    }
}

int main(void)
{
    void uppercase(char letter[]);

    char letter[] = "abcdefg";

    uppercase("abcdefg");

    return 0;
}
