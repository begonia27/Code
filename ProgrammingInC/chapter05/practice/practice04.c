#include <stdio.h>

int main(void)
{
    int number = 1, factorial = 1;

    printf("NUMBER      THE FACTORIAL FROM 1 TO 10\n");
    printf("------      --------------------------\n");

    for (number; number <= 10; ++number)
    {
        factorial *= number;
        printf("%3i                     %i\n",number,factorial);
    }

    return 0;
}
