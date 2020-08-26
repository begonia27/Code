#include <stdio.h>

int main(void)
{
    int numberOne, numberTwo, remainder;

    printf("Enter two numbers: \n");
    scanf("%i\n %i", &numberOne, &numberTwo);

    remainder = numberOne % numberTwo;

    if (remainder == 0)
    {
        printf("The numberOne can be divisible numberTwo.\n");
    }
    else
    {
        printf("The numberOne can't be divisible numberTwo.\n");
    }

    return 0;
}
