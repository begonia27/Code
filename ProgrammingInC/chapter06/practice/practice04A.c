#include <stdio.h>

int main(void)
{
    float numberOne, result;
    char operator;

    while (1)
    {
        printf("Enter a number with an operater:");
        scanf("%f %c", &numberOne, &operator);

        switch (operator)
        {
            case'S':
                result = numberOne;
                break;
            case'+':
                result += numberOne;
                printf("%.2f\n", result);
                break;
            case'-':
                result -= numberOne;
                printf("%.2f\n", result);
                break;
            case'*':
                result *= numberOne;
                printf("%.2f\n", result);
                break;
            case'/':
            {
                if(numberOne == 0)
                {
                    printf("Division by zero.\n");
                }
                else
                {
                    printf("%.2f\n", result /= numberOne);
                }
            }
            case'E':
                break;
            default:
                printf("Unknown operator.\n");
                break;
        }
    }

    return 0;
}
