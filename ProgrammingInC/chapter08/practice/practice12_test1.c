#include <stdio.h>

void displayArray(int array[][5], int n, int m);

int main(void)
{
    int n = 0;
    int m = 0;
    int a[4][5] = 
    {
        {0, 1, 2, 3, 4}, 
        {0, 1, 2, 3, 4}, 
        {0, 1, 2, 3, 4}, 
        {0, 1, 2, 3, 4},
    };

    displayArray(a, 4, 5);

    return 0;
}

void displayArray(int array[][5], int n, int m)
{
    for (int i = 0; i < n; ++i)
    {   
        for (int j = 0; j < m; ++j)
        {
            printf("%i\n", array[i][j]);
        }
    }
}
