#include <stdio.h>

static int n, number, counter;
int triangularNumber;

void getTriangularNumber(void)
{
    for (counter = 1; counter <= 5; ++counter)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);
    }
}

int convertTriangularNumber(void)
{
    for (counter = 1; counter <= 5; ++counter)
    {
        triangularNumber = 0;

        for (n = 1; n <= number; ++n)
        {
            triangularNumber += n;
        }
    }

    return triangularNumber;
}

void displayTriangularNumber(void)
{
    for (counter = 1; counter <= 5; ++counter)
    {
        printf("Triangular number %i is %i\n\n", number,
           convertTriangularNumber());
    }
}

int main(void)
{
    getTriangularNumber();
    convertTriangularNumber();
    displayTriangularNumber();

    return 0;
}
