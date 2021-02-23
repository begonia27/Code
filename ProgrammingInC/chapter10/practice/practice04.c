#include <stdio.h>

void substring(const char string[], int subscript, int count, char answer)
{
    int i;
    char result;

    for (i = 0; i >= subscript; ++i)
    {
        printf("result is %s\0.\n", string[i]);
    }
}

int main(void)
{
    void substring(const char string[], int subscript, int count, char answer);

    const char string[] = "two words";
    char result;
    int subscript, count;

    substring("two word", 4, 20, result);

    if (subscript <= count)
    {
        printf("result is %s\0.\n", result);
    }
    else
    {
        printf("error.\n");
    }

    return 0;
}
