#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Macros to generate random x,y coordinates
#define X ((double)rand() / RAND_MAX)
#define Y ((double)rand() / RAND_MAX)

/**
 * @brief Calculates Pi using a Monte Carlo simulation.
 * @param count The number of random points to generate.
 * @return The estimated value of Pi.
 */
double calculate_pi(int count) 
{
    int circle_area = 0;
    for (int i = 0; i < count; i++) 
    {
        double x = X;
        double y = Y;
        double radius = sqrt(x * x + y * y);
        if(radius <= 1) circle_area++ ;
    }
    return 4 * (double)circle_area / count;
}

int main()
{
    srand(time(NULL)); // Seed the random number generator
    
    int count = 0;
    printf("How time you want to run the simulation:\t\t");
    scanf("%d",&count);
    double estimated_pi = calculate_pi(count);
    printf("The estimated value of PI calculated randomly is:\t%f",estimated_pi);
    return 0;
}
/*
*-------------------------------------------------------------------
*   The output results from this simulation code are:
*-------------------------------------------------------------------
*   $ ./main
*   How time you want to run the simulation:         10
*   The value of PI calculated randomly is:          4.000000
*
*   $ ./main
*   How time you want to run the simulation:         100
*   The value of PI calculated randomly is:          3.400000
*
*   $ ./main
*   How time you want to run the simulation:         1000
*   The value of PI calculated randomly is:          3.120000
*
*   $ ./main
*   How time you want to run the simulation:         10000
*   The value of PI calculated randomly is:          3.138000
*
*   $ ./main
*   How time you want to run the simulation:         100000
*   The value of PI calculated randomly is:          3.144840
*
*   $ ./main
*   How time you want to run the simulation:         10000000
*   The value of PI calculated randomly is:          3.141235
*
*/


