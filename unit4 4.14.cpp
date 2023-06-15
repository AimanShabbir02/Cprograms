 #include <stdio.h>
 int main( void )
 {
 unsigned int i; 
 unsigned int j; 
 unsigned int factorial; 
 puts( "X\tFactorial of X" ); 
 for ( i = 1; i <= 5; ++i ) {
 factorial = 1;
 for ( j = 1; j <= i; ++j ) {
 factorial *= j;
 } 
 printf( "%u\t%u\n", i, factorial );
 }
} 
