#include <stdio.h>
 int main( void )
 {
 int grade; 
 unsigned int aCount = 0; 
 unsigned int bCount = 0; 
 unsigned int cCount = 0;
 unsigned int dCount = 0; 
 unsigned int fCount = 0; 
 double averageGrade; 
 puts( "Enter the letter grades.");
 puts( "Enter the EOF character to end input." );
 while ( ( grade = getchar() ) != EOF ) {
 switch ( grade ) {
 case 'A': 
 case 'a': 
 ++aCount; 
 break; 
 case 'B': 
 case 'b': 
 ++bCount; 
 break; 
 case 'C': 
 case 'c': 
 ++cCount; 
 break; 
 case 'D': 
 case 'd': 
 ++dCount; 
 break;
 case 'F': 
 case 'f': 
 ++fCount; 
 break;
 case '\n': 
 case '\t': 
 case ' ': 
 break; 
 default: 
 printf( "%s", "Incorrect letter grade entered." );
 puts( " Enter a new grade." );
 break; 
 } 
 } 
 puts( "\nThe totals for each letter grade are:" );
 printf( "A: %u\n", aCount );
 printf( "B: %u\n", bCount );
 printf( "C: %u\n", cCount );
 printf( "D: %u\n", dCount );
 printf( "F: %u\n", fCount );
 averageGrade = ( double )( 4 * aCount + 3 * bCount + 2 * cCount + dCount ) /
 ( aCount + bCount + cCount + dCount + fCount );
  if ( averageGrade > 3.5 ) {
 puts( "Average grade is A" );
 } 
 else if ( averageGrade > 2.5 ) {
 puts( "Average grade is B" );
 } 
 else if ( averageGrade > 1.5 ) {
 puts( "Average grade is C" );
 } 
 else if ( averageGrade > 0.5 ) {
 puts( "Average grade is D" );
 } 
 else {
 puts( "Average grade is F" );
 } 
} 
