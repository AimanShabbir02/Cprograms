 #include <stdio.h>
 #include <math.h>
 int main( void )
 {
 unsigned int year; 
 unsigned int amount; 
 unsigned int dollars; 
 unsigned int cents; 
 unsigned int principal = 100000; 
 double rate = .05; 
 printf( "%s%21s\n", "Year", "Amount on deposit" );
 for ( year = 1; year <= 10; ++year ) {
 amount = principal * pow( 1.0 + rate, year );
 cents = amount % 100;
 dollars = amount / 100;
 printf( "%4u%18u.", year, dollars );
 if ( cents < 10 ) {
 printf("0%u\n", cents);
 } 
 else {
 printf("%u\n", cents);
 } 
 }
} 
