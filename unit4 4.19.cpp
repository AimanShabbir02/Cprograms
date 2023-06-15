#include <stdio.h>
 int main( void )
 {
 int product; 
 int quantity; 
 double total = 0.0; 
 puts( "Enter pairs of item numbers and quantities.");
 puts( "Enter -1 for the item number to end input." );
 scanf( "%d", &product );
 while ( product != -1 ) {
 scanf( "%d", &quantity );
 switch ( product ) {
 case 1:
 total += quantity * 2.98; 
 break;
 case 2:
 total += quantity * 4.50; 
 break;
 case 3:
 total += quantity * 9.98; 
 break;
 case 4:
 total += quantity * 4.49; 
 break;
 case 5:
 total += quantity * 6.87; 
 break;
 default:
 printf( "Invalid product code: %d\n", product );
 printf( " Quantity: %d\n", quantity );
 } 
 scanf( "%d", &product ); 
 printf( "The total retail value was: %.2f\n", total );
 } 
}
