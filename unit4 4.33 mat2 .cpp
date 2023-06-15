#include <stdio.h>
 int main( void )
 {
 unsigned int loop;
 unsigned int div; 
 unsigned int mod;
 puts( " Roman\nNumeral\t\tDecimal" );
 for ( loop = 1; loop <= 100; ++loop ) {
 div = loop / 10; 
 mod = loop % 10;
 switch ( div ) {
 case 0:
 break;
 case 1:
 printf( "%s", "X" );
 break; 
 case 2:
 printf( "%s", "XX" );
 break;
 case 3:
 printf( "%s", "XXX" );
 break; 
 case 4:
 printf( "%s", "XL" );
 break; 
 case 5:
 printf( "%s", "L" );
 break; 
 case 6:
 printf( "%s", "LX" );
 break;
 case 7:
 printf( "%s", "LXX" );
 break; 
 case 8:
 printf( "%s", "LXXX" );
 break; 
 case 9:
 printf( "%s", "XC" );
 break; 
  case 10:
 printf( "%s", "C" );
 break; 
 default:
 break; 
 } 
 switch( mod ) {
 case 0:
 printf( "\t\t%4u\n", loop );
 break; 
 case 1:
 printf( "I\t\t%4u\n", loop );
 break; 
 case 2:
 printf( "II\t\t%4u\n", loop );
 break;
 case 3:
 printf( "III\t\t%4u\n", loop );
 break; 
 case 4:
 printf( "IV\t\t%4u\n", loop );
 break; 
 case 5:
 printf( "V\t\t%4u\n", loop );
 break; 
 case 6:
 printf( "VI\t\t%4u\n", loop );
 break;
 case 7:
 printf( "VII\t\t%4u\n", loop );
 break; 
 case 8:
 printf( "VIII\t\t%4u\n", loop );
 break; 
 case 9:
 printf( "IX\t\t%4u\n", loop );
 break; 
 } 
 } 
 } 
