#include <stdio.h>

void substring(const char string[], int subscript, int count, char answer)
{
    int i;

    for (i = 4; string[i] != '\0'; ++i)
    {
        printf("%c\0.\n", string[i]);
    }
}

int main(void)
{
    void substring(const char string[], int subscript, int count, char answer);

    int i;
    const char string[] = "two words";
    char result;
    int subscript, count;

    if (subscript < count)
    {
        substring("two words", 4, 20, result);
    }
    else
    {
        printf("error.\n");
    }

    return 0;
}
