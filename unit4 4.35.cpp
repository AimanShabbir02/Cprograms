#include <stdio.h>
int main( void )
{
unsigned int x; 
int breakOut = 0; 
for ( x = 1; x <= 10 && breakOut == 0; ++x ) {
if ( x == 4 ) {
breakOut = 1;
} 
printf( "%u ", x );
} 
printf( "\nBroke out of loop at x = %u\n", x );
} 
