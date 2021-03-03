#include <stdio.h>

int findString(const char beSearch[], char search[], char result)
{
    for (int i = 0; beSearch[i] == search[0] && beSearch[i] != '\0'; ++i)
    {
        printf("%i\n", i);
    }
}

int main()
{
    int findString(const char beSearch[], char search[], char result);

    int i = 0;
    int startPoint = 0;

    const char beSearch[] = "a chatterbox";
    const char search[] = "hat";

    findString("a chatterbox", "hat", startPoint);

    startPoint = findString("a chatterbox", "hat", startPoint);

    printf("%i\n", startPoint);

    return 0;
}
