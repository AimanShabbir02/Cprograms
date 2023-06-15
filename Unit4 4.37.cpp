#include <stdio.h>
 int main( void )
 {
 unsigned int x; 
 for ( x = 1; x <= 10; ++x ) {
 if ( x != 5 ) {
 printf( "%u ", x );
 } 
 } 
 puts( "\nUsed an if statement to skip printing the value 5" );
	}
