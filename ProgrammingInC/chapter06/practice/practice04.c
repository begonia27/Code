#include <stdio.h>

int main (void)
{
    float numberOne, numberTwo, result;
    char operator;

    printf("Enter a number with an operater:");
    scanf("%f %c", &numberOne, &operator);

    while (operator != 'E')
    {
        if (operator == 'S')
        {
            if (operator == '+')
            {   
                result = numberOne + numberTwo;
                printf("%.2f\n", result);
            }
            else if (operator == '-')
            {
                printf("%.2f\n", result = numberOne - numberTwo);
            }
            else if (operator == '*')
            {
                printf("%.2f\n", result = numberOne * numberTwo);
            }
            else if (operator == '/')
            {
                if (numberTwo == 0)
                {
                    printf("Division by zero.\n");
                }
                else
                {
                    printf("%.2f\n", result = numberOne / numberTwo);             
                }
            }
        }
        else
        {
            printf("Unknown operator.\n");
        }
    }
        
    return 0;
}
