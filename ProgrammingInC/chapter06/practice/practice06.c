#include <stdio.h>

int main(void)
{
    char number, zero, one, two, three, four, five, six, seven, eight, nine;

    printf("Enter your number: \n");
    scanf("%c", &number);

    if (number ='0' && number <= '9')
    {
        if (number ='0')
        {
            printf("%c\n", zero);
        }
        else if (number = '1')
        {
            printf("%c\n", one);
        }
        else if (number = '2')
        {
            printf("%c\n", two);
        }
        else if (number = '3')
        {
            printf("%c\n", three);
        }
        else if (number = '4')
        {
            printf("%c\n", four);
        }
        else if (number = '5')
        {
            printf("%c\n", five);
        }
        else if (number = '6')
        {
            printf("%c\n", six);
        }
        else if (number = '7')
        {
            printf("%c\n", seven);
        }
        else if (number = '8')
        {
            printf("%c\n",eight);
        }
        else if (number = '9')
        {
            printf("%c\n", nine);
        }
    }
    else
    {
        printf("Unknown operator.\n");
    }
    
    return 0;
}
