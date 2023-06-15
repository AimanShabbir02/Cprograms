 #include <stdio.h>
 int main( void )
 {
 unsigned int line;
 unsigned int space; 
 unsigned int asterisk; 
 for ( line = 1; line <= 9; line += 2 ) {
 for ( space = ( 9 - line ) / 2; space > 0; --space ) {
 printf( "%s", " " );
 } 
 for ( asterisk = 1; asterisk <= line; ++asterisk ) {
 printf( "%s", "*" );
 } 
 puts( "" );
 } 
 for ( line = 7; line >= 0; line -= 2 ) {
 for ( space = ( 9 - line ) / 2; space > 0; --space ) {
 printf( "%s", " " );
 }
 for ( asterisk = 1; asterisk <= line; ++asterisk ) {
 printf( "%s", "*" );
 } 
 puts( "" );
 }
 } 
