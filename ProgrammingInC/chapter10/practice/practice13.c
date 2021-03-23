// 将字符串中的小写字母转换为对应的大写字母
#include <stdio.h>

void uppercase(char letter[])
{
    for (int i = 0; letter[i] != '\0'; ++i)
    {
        if (letter[i] >= 'a' && letter[i] <= 'z')
        {
            letter[i] -= 32;
            printf("%c", letter[i]);
        }
        else
        {
            printf("Please enter a letter.");
        }
    }
}

int main(void)
{
    void uppercase(char letter[]);
    int i;

    char letter[] = "c - 'a' + 'A'";

    uppercase("c - 'a' + 'A'");

    return 0;
}
