#include <stdio.h>

int transposeMatrix(int number[], int i, int j);
void printMatrix(int number[], int reverseNumber);

int main(void)
{   
    int i = 0;
    int j = 0;
    int number = 0;
    int value, reverseNumber;

    value = transposeMatrix(number, i, j);
    printMatrix(number, reverseNumber);
}

int transposeMatrix(int number[], int i, int j)
{   
    int row, column, temp;

    int number[4][5] =
    (
        (0, 1, 2, 3, 4),
        (0, 1, 2, 3, 4),
        (0, 1, 2, 3, 4),
        (0, 1, 2, 3, 4)
    );

    int reverseNumber[row][column];

    row = (4 * 5) / 4;
    column = (4 * 5) / 5;

    for (row = 0; row < 4; ++row)
    {
        for (column = 0; column < 5; ++column)
        {
            if (number[j] > number[i])
            {
                reverseNumber[column] = number[i];
                reverseNumber[row] = number[j];
            }
        }
    }

    return reverseNumber[row][column];
}

void printMatrix(int number[], int reverseNumber)
{
    int row = 0;
    int column = 0;
    printf("The transpose matrix is %i", transposeMatrix[row][column]);
}
