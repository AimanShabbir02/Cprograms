#include <stdio.h>
using namespace std ;
int main () {
	int fixed;
    double principal (1000) ;
    double rate (0) ;
    printf ("setprecision(2)",fixed);
    printf(" Enter rate ");
    scanf("%d",&rate);
    printf( " Initial principal : \n", principal) ;
    printf("    Interest rate : \n", rate) ;
    printf("\n year ");
	printf("Amount on deposite"); 
    for(unsigned year(1); year <= 10 ; year++){
        double amount = principal * (1+rate,year) ;
    }
}
