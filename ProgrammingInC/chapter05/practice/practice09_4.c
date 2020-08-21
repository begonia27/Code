#include <stdio.h>

int main(void)
{
    int n = 1, number, triangularNumber = 0, counter = 1;

    while (counter <= 5)
    {
        printf("What triangular number do you want? ");
        scanf("%i",&number);

        while (n <= number)
        {
            triangularNumber += n;

            ++n;
        }

        printf("Triangular number %i is %i\n\n", number, triangularNumber);

        ++counter;
    }
    
    return 0;
}
