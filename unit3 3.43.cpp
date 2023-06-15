#include <stdio.h>
 int main( void )
 {
 int a; 
 int b;
 int c; 
 printf( "Enter three non-zero integers: " );
 scanf( "%d%d%d", &a, &b, &c);
 if ( a + b < c )
 {
 printf( "The three integers cannot be the sides of a triangle" );
 }
 else if ( b + c < a )
 {
 printf( "The three integers cannot be the sides of a triangle" );
 } 
 else if ( c + a < b )
 {
 printf( "The three integers cannot be the sides of a triangle" );
 } 
 else {
 printf( "The three integers could be the sides of a triangle ");
 } 
} 
