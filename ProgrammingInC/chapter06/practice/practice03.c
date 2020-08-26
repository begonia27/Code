#include <stdio.h>

int main(void)
{
    int numberOne, numberTwo;
    double quotient;

    printf("Enter two numbers: \n");
    scanf("%i\n %i", &numberOne, &numberTwo);

    if (numberTwo != 0)
    {
        quotient = numberOne / numberTwo;
        printf("The numberOne divide by numberTwo is %.3f\n", quotient);
    }
    else
    {
        printf("Division by zero.\n");
    }
    
    return 0;
}
