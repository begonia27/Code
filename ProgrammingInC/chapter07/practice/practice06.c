// Program to gennerate the first 15 Fibonacci numbers
#include <stdio.h>

int main(void)
{
    int i = 0, n = 1, count;

    printf("%i\n%i\n", i, n);

    i = i + 1;
    n = n + 1; 

    for (i, n ; count < 6; ++count)
    {
        i += n;
        n += i;

        printf("%i\n%i\n", i, n);       
    }

    i += n;

    printf("%i\n", i);
    return 0;
}
