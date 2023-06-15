#include <stdio.h>
#include <math.h>
using namespace std;
 double roundToInteger( double n ); 
 double roundToTenths( double n ); 
 double roundToHundredths( double n ); 
 double roundToThousandths( double n ); 
 int main()
 {
 int i; 
 int count; 
 double number; 
 printf( "%s", "How many numbers do you want to process? " );
 scanf( "%d", &count );
 for ( i = 0; i < count; ++i ) {
 printf( "%s", "Enter number: " );
 scanf( "%lf", &number );
 printf( "%f rounded to an integer is %f\n",
 number, roundToInteger( number ) );
 printf( "%f rounded to the nearest tenth is %f\n",
 number, roundToTenths( number ) );
 printf( "%f rounded to the nearest hundredth is %f\n",
 number, roundToHundredths( number ) );
 printf( "%f rounded to the nearest thousandth is %f\n\n",
 number, roundToThousandths( number ) );
 }
 } 
 double roundToInteger( double n )
 {
 return floor( n + .5 );
 } 
 double roundToTenths( double n )
 {
 return floor( n * 10 + .5 ) / 10;
 } 
 double roundToHundredths( double n )
 {
 return floor( n * 100 + .5 ) / 100;
 } 
 double roundToThousandths( double n )
 {
 return floor( n * 1000 + .5 ) / 1000;
 }
