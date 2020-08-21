#include <stdio.h>

int main(void)
{
    int number, theOtherOne, sum;

    printf("Enter your number: \n");
    scanf("%i",&number);

    while (number != 0)
    {
        theOtherOne = number % 10;
        number = number / 10;
        sum += theOtherOne;
    }

    printf("%i\n",sum);

    return 0;
}
