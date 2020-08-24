/*Program to calculate the average of a grade and count the number of failinf test grades*/

#include <stdio.h>

int main(void)
{
    int numberOfGrades, i, grade;
    int gradeTotal = 0;
    int failureCount = 0;
    float average;

    //set the number of grade enteries
    printf("How many grade will you be entering? ");
    scanf("%i",&numberOfGrades);

    for (i = 1; i <= numberOfGrades; ++i)
    {      
        //make user input their grades
        printf("Enter grade #%i: ",i);
        scanf("%i",&grade);

        gradeTotal = gradeTotal + grade;

        //judge the input grades lowwer 65 yes or no
        if (grade < 65)
        {
            ++failureCount;
        }
    }

    //calculate the average
    average = (float)gradeTotal / numberOfGrades;

    //display the average and failureCount
    printf("\nGrade average = %.2f\n",average);
    printf("Number of failures = %i\n",failureCount);

    return 0;
}
