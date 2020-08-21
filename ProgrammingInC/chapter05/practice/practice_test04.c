#include <stdio.h>

int main(void)
{
    double a = 12345678912345;
    double b = 0.0000000001;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The a's value is %f\n",a);
    printf("The b's value is %f\n",b);

    return 0;
}
