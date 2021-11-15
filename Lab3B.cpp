#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;



int main()

{
    //declaring variables and setting seed
    int x;
    int random;
    srand(time(NULL));

    //Printing and reading in variable x
    cout << "Enter any integer from 200 to 300 inclusive: ";
    cin >> x;

    //if statement for determining range and generating number
    if (x < 200 || x > 300)
    {
        cout << "Error, your value, " << x << "is outside the range!";
    }
    else
    {   
        
        cout << "Your value, " << x << " is inside the range." << endl;
        random = rand() % 101 + 200;
        cout << "Randomely generated number: " << random << endl;
        if (random < x)
        {
            cout << "The randomely generated number is less than your value.";
        }

    }


}