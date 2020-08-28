#include <stdio.h>

int main(void)
{
    float numberOne, result;
    char operator;

    while (1)
    {
        printf("Enter a number with an operater:");
        scanf("%f %c", &numberOne, &operator);

        if (operator== 'S')
        {
            result = numberOne;
        }
        else if (operator== '+')
        {
            result += numberOne;
            printf("%.2f\n", result);
        }
        else if (operator== '-')
        {
            printf("%.2f\n", result -= numberOne );
        }
        else if (operator== '*')
        {
            printf("%.2f\n", result *= numberOne);
        }
        else if (operator== '/')
        {
            if (numberOne == 0)
            {
                printf("Division by zero.\n");
            }
            else
            {
                printf("%.2f\n", result /= numberOne);
            }
        }
        else if (operator == 'E')
        {
            break;
        }
        else
        {
            printf("Unknown operator.\n");
        }
    }

    return 0;
}
