#include <stdio.h>
 int main( void )
 {
  int sum = 0; 
 int number; 
 int value; 
 int i; 
 printf( "Enter the number of values to be processed: " );
 scanf( "%d", &number ); 
 for ( i = 1; i <= number; ++i ) {
 printf( "Enter a value: " );
 scanf( "%d", &value );
 sum += value; 
 } 
 printf( "Sum of the %d values is %d\n", number, sum );
} 
