#include <stdio.h>
 using namespace std;
 int main( void )
 {
 unsigned int year; 
 int rate; 
 double amount; 
 double principal = 1000.0; 
 for ( rate = 5; rate <= 10; ++rate ) {
 printf( "Interest Rate: %f\n", rate / 100.0 );
 printf( "%s%21s\n", "Year","Amount on deposit" );
 for ( year = 1; year <= 10; ++year ) {
 amount = principal * pow ( 1 + ( rate / 100.0 ), year );
 printf( "%4u%21.2f\n", year, amount );
 } 
 puts( "" );
 } 
} 
