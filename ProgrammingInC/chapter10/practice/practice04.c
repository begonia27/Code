#include <stdio.h>

void substring (const char string[], int subscript, int count, char answer[])
{
    int i;
    char result;

    for (i = 0; i >= subscript; ++i)
    {
        result = string[i];
    }
}

int main(void)
{
    void substring (const char string[], int subscript, int count, char answer[]);

    const char string[10] = {"two words"};
    char result;
    int subscript, count;

    substring(string[10], 4, 20, result);

    if (subscript < count)
    {
        printf("result is %c'\0'.\n", result);
    }

    return 0;
}
