#include <stdio.h> 
#include <stdlib.h> 
#include "SampleLib.h" 

int main( void ) {
    int result = power( 2, 3 );
    printf( "2³ == %d\n", result );
    result = fact( 6 );
    printf( "6! == %d\n", result );

    int a, b;
    a = 5;
    b = 7;
    printf("Avant : a = %d et b = %d \n", a, b);
    permuter(&a, &b);
    printf("Apres : a = %d et b = %d", a, b);

    return EXIT_SUCCESS;
}