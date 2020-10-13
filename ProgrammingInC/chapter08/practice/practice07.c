#include <stdio.h>
#include <math.h>

int x, n;
long int result;

void getNumberAndSquare(void)
{
    printf("What number do you want? ");
    scanf("%i", &x);

    printf("What square do you want? ");
    scanf("%i", &n);
}

long int x_to_the_n(void)
{
    if (x < 0)
    {
        if (n % 2 == 0)
        {
            result = pow(x, n);
        }
        else
        {
            result = pow(x, n);
            result = -result;
        }    
    }

    result = pow(x, n);

    return result;
}

void displayNumber(void)
{
    printf("%i to the %ith is %i\n", x, n, x_to_the_n());
}

int main(void)
{
    getNumberAndSquare();
    x_to_the_n();
    displayNumber();

    return 0;
}
