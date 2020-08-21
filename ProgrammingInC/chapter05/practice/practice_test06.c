#include <stdio.h>

int main(void)
{
    double a = 12345678912345, b = (double)0.00000001, temp;

    temp = a;
    a = b;
    b = temp;

    printf("The a's value is %.10f\n",a);
    printf("The b's value is %.10f\n",b);

    return 0;
}
