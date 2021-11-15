#include <iostream>
#include <stdio.h>
using namespace std;


int main()

{
    //Declaring Variables
    char a;
    char b;
    int c;
    int d;
    double e;
    double f;

    //Prompting and reading in characters a and b
    printf("Type your a and b values (characters) separated by a space: ");
    scanf("%c %c", &a, &b);

    //Prompting and reading in integers c and d
    printf("Type your c and d values (integers) separated by a space: ");
    scanf("%i %i", &c, &d);

    //Prompting and reading doubles e and f
    printf("Type your e and f values (doubles) separated by a space: ");
    scanf("%lf %lf", &e, &f);

    //Printing all variables
    printf("You just entered %c, %c, %i, %i, %lf, and %e. \n", a, b, c, d, e, f);

}

