// 将字母转换为对应的ASCII码
#include <stdio.h>

int main(void)
{
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    if (letter >= 'a' && letter <= 'z')
    {
        printf("%c to ASCII is %i", letter, letter);
    }
    else
    {
        printf("error");
    }

    return 0;
}
