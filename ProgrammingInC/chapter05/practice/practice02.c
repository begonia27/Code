#include <stdio.h>

int main()
{
    int number,squareNumber;

    printf("SQUARE OF NUMBER\n\n");
    printf("number    square of number\n");
    printf("------    ----------------\n");

    squareNumber = 0;

    for (number = 1; number <= 10; ++number)
    {
        squareNumber = number * number;
        printf(" %2i              %i\n",number,squareNumber);
    }

    return 0;
}
