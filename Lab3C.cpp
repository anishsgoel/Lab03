#include <iostream>
#include <stdio.h>
using namespace std;


int main()

{
    //Declaring variables
    float salary;
    int experience;
    char performance;
    float bonus;

    //Print and read in variables
    printf("Enter your salary (dollars): ");
    scanf("%f", &salary);

    printf("Enter your experience (years): ");
    scanf("%i", &experience);

    printf("Enter your performance rating (Y or y for satisfactory, N or n for unsatisfactory): ");
    scanf(" %c", &performance);

    //if statements for determining bonus based on rating and experience
    if (performance == 'y' || performance == 'Y')
    {
        if (experience >= 10)
        {
            bonus = 0.1 * salary;
        }
        else
        {
            bonus = 0.05 * salary;
        }
    }
    else
    {
        if (experience >= 10)
        {
            bonus = 0.03 * salary;
        }
        else
        {
            bonus = 0;
        }
        
    }

    //print bonus
    printf("Bonus = $%.2f\n", bonus);
}

