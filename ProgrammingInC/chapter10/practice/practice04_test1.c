#include <stdio.h>

int main(void)
{
    const char string[9] = "two words";
    int i;

    for (i = 4; i < 9; ++i)
    {
        printf("%c\n", string[i]);
    }

    return 0;
}
