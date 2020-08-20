#include <stdio.h>

int main(void)
{
    int number = 5, triangularNumber = 0;

    printf("NUMBER          THE TRIANGULAR NUMBER FROM 5 TO 50\n");
    printf("------          ----------------------------------\n");

    for (number; number <= 50; number += 5)
    {
        triangularNumber = number * (number + 1) / 2;
        printf("%3i                             %i\n",number,triangularNumber);
    }

    return 0;
}
