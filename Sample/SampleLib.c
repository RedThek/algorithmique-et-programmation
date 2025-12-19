#include "SampleLib.h"

// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ) { 
    unsigned int result = 1; 
    while ( value > 1 ) { 
        result *= value; 
        value --; 
    } 
    return result; 
}

// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ) { 
    if ( pow == 0 ) return 1; 
    if ( pow == 1 ) return value;
    int accumulator = 1;
    while( pow > 0 ) { 
        accumulator *= value; 
        pow--; 
    }
    return accumulator; 
}

void permuter(int * a, int * b)
{
    int  c = *a;
    *a = *b;
    *b = c;
}

int estPremier(int n)
{
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void resoudreEquationSecondDegre(double a, double b, double c)
{
    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Pas de solution réelle.\n");
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("Une solution réelle double: x = %.2f\n", x);
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Deux solutions réelles distinctes: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
}

double distanceEntrePoints(Point p1, Point p2)
{
    double dx = p2.coordonneeX - p1.coordonneeX;
    double dy = p2.coordonneeY - p1.coordonneeY;
    return sqrt(dx * dx + dy * dy);
}
