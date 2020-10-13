#include <stdio.h>

int n, number, counter, triangularNumber;

void getTriangularNumber(void)
{
    printf("What triangular number do you want? ");
    scanf("%i", &number);
}

int convertTriangularNumber(void)
{
    triangularNumber = 0;

    for (n = 1; n <= number; ++n)
    {
        triangularNumber += n;
    }

    return triangularNumber;
}

void displayTriangularNumber(void)
{
    printf("Triangular number %i is %i\n\n", number, convertTriangularNumber());
}

int main(void)
{
    for (counter = 1; counter <= 5; ++counter)
    { 
        getTriangularNumber();
        convertTriangularNumber();
        displayTriangularNumber();
    }

    return 0;
}
