#include <stdio.h>

int main(void)
{
    int number = 5, triangularNumber = 0;

    for (number; triangularNumber <= 50; number += 5)
    {
        triangularNumber = number * (number + 1) / 2;
        printf("The triangularNumber for 5 to 50 is %i",triangularNumber);
    }

    return 0;
}
