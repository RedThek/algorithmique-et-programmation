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
