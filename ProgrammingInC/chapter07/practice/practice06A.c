// Program to gennerate the first 15 Fibonacci numbers
#include <stdio.h>

int main(void)
{
    int i = 0, n = 1, c, count = 0;
    
    printf("%i\n%i\n", i, n);

    for (i, n; count < 13; ++count)
    {
        c = i + n;

        printf("%i\n", c);

        i = n;
        n = c;
    }

    return 0;
}
