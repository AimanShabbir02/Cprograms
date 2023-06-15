#include <stdio.h>
int main( void )    
{
    int a ;             
    int b ;             
    int c ;            
    int i = 0 ;         
    for ( a = 1 ; a <= 500 ; a++ ) {                
        for ( b = 1 ; b <= 500 ; b++ ) {             
            for ( c = 1 ; c <= 500 ; c++ ) {       
                if ( (a*a) + (b*b) == (c*c) ) {       
                    i++ ;      
                    printf( "SET-%d]=====[%d|%d|%d\n", i, a, b, c );
                }
            }  
        }
    }
    printf( "\n\n=========================================\n" ) ;
    printf( "Done collecting all Pythagorean Triples\n"
            "using numbers less than or equal to 500.\n" ) ;
    printf( "=========================================\n\n" ) ;
    return 0 ;        
} 
