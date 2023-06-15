#include <stdio.h>
 int main( void )
 {
 double pi = 0.0; 
 double num = 4.0; 
 double denom = 1.0; 
 unsigned int loop; 
 unsigned int accuracy; 
 accuracy = 400000; 
 printf( "Accuracy set at: %u\n", accuracy );
 puts( "term\t\t pi" );
 for ( loop = 1; loop <= accuracy; ++loop ) {
 if ( loop % 2 != 0 ) {
 pi += num / denom;
 } 
 else { 
 pi -= num / denom;
 } 
 printf( "%u\t\t%f\n", loop, pi );
 denom += 2.0; 
 }
 } 
