#include <stdio.h>

int main(void)
{
    int n, m, number, triangularNumber, counter;

    printf("What frequency counter do you want? ");
    scanf("%i",&m);

    for (counter = 1; counter <= m; ++counter)
    {
        printf("What triangularNumber do you want? ");
        scanf("%i",&number);
        
        triangularNumber = 0;

        for (n = 1; n <= number; ++n)
        {
            triangularNumber += n;
        }

        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}
