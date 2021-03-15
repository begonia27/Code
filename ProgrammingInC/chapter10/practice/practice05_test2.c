// 比较长单词的每一个字符是否和短单词的每一个字符一致
#include <stdio.h>
#include <stdbool.h>

bool equalStrings(const char beSearch[], const char search[]);

bool equalStrings(const char beSearch[], const char search[])
{
    int i = 0;
    bool areEqual;

    while (beSearch[i] == search[i] && beSearch[i] != '\0'
            && search[i] != '\0')
    {
        ++i;
    }

    if (beSearch[i] != '\0' && search[i] != '\0')
    {
        areEqual = true;
    }
    else
    {
        areEqual = false;
    }

    return areEqual;
}


int main()
{
    bool equalStrings (const char beSearch[], const char search[]);

    const char beSearch[] = "a chatterbox";
    const char search[] = "hat";

    printf("%i\n", equalStrings(beSearch, search));
    printf("%i\n", equalStrings(search, "atttttttttttt"));
    printf("%i\n", equalStrings(search, search));

    return 0;
}
