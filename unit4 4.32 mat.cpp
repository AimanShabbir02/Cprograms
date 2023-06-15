#include <stdio.h>
 int main( void )
 {
 unsigned int line; 
 unsigned int space; 
 unsigned int asterisk; 
 unsigned int size; 
 puts( "Enter an odd number for the diamond size ( 1-19 ):" );
 scanf( "%u", &size );
 for ( line = 1; line <= size - 2; line += 2 ) {
 for ( space = ( size - line ) / 2; space > 0; --space ) {
 printf( "%s", " " );
 } 
 for ( asterisk = 1; asterisk <= line; ++asterisk ) {
 printf( "%s", "*" );
 } 
 puts( "" );
 } 
 for ( line = size; line >= 0; line -= 2 ) {
 for ( space = ( size - line ) / 2; space > 0; --space ) {
 printf( "%s", " " );
 } 
 for ( asterisk = 1; asterisk <= line; ++asterisk ) {
 printf( "%s", "*" );
 } 
 puts( "" );
 } 
 } 
