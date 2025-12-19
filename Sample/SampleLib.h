#ifndef __MY_MATH_LIB_H 
#define __MY_MATH_LIB_H

typedef struct point
{
    double coordonneeX;
    double coordonneeY;
} Point;


// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );

// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );

void permuter(int * a, int * b);

int estPremier(int n);

void resoudreEquationSecondDegre(double a, double b, double c);

double distanceEntrePoints(Point p1, Point p2);

#endif