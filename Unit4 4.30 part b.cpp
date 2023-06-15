 #include <stdio.h>
 int main( void )
 {
 int grade; 
 unsigned int aCount = 0; 
 unsigned int bCount = 0; 
 unsigned int cCount = 0; 
 unsigned int dCount = 0; 
 unsigned int fCount = 0; 
 printf( "%s", "Enter the letter grades." );
 puts( " Enter the EOF character to end input:" );
 while ( ( grade = getchar() ) != EOF ) {
 if ( grade == 'A' || grade == 'a' ) {
 ++aCount;
 } 
 if ( grade == 'B' || grade == 'b' ) {
 ++bCount;
 } 
 if ( grade == 'C' || grade == 'c' ) {
 ++cCount;
 } 
 if ( grade == 'D' || grade == 'd' ) {
 ++dCount;
 } 
 if ( grade == 'F' || grade == 'f' ) {
 ++fCount;
 } 
 if ( grade == '\n' || grade == ' ' || grade == '\t' ) {
} 
 if ( grade != 'a' && grade != 'A' &&
 grade != 'B' && grade != 'b' &&
 grade != 'c' && grade != 'C' &&
 grade != 'd' && grade != 'd' &&
 grade != 'f' && grade != 'F' &&
 grade != '\n'&& grade != ' ' && grade != '\t' ) {
 printf( "%s", "Incorrect letter grade entered." );
 puts( " Enter a new grade." );
 } 
 } 
 puts( "\nTotals for each letter grade were:" );
 printf( "A: %u\n", aCount );
 printf( "B: %u\n", bCount );
 printf( "C: %u\n", cCount );
 printf( "D: %u\n", dCount );
 printf( "F: %u\n", fCount );
 } 
