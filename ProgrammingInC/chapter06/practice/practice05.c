#include <stdio.h>

int main()
{
    int number, right_digit, record = 1;

    printf("Enter your number:\n");
    scanf("%i", &number);

    if (number < 0)
    {
        number = -number;
        record = -number;
    }

    do
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;

    } while (number != 0);

    if (record < 0)
    {
        printf("-\n");
    }

    return 0;
}
