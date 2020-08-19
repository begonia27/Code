#include <stdio.h>

void do_next_multiple(int i, int j)
{
    int next_multiple = i + j - i % j;
    printf("%10d%10d%22d\n",i, j, next_multiple);
}

int main(void)
{
    printf("         i         j         next_multiple\n");

    int i = 365;
    int j = 7;
    do_next_multiple(i, j);

    i = 12258;
    j = 23;
    do_next_multiple(i, j);

    i = 996;
    j = 4;
    do_next_multiple(996,4);

    return 0;
}
