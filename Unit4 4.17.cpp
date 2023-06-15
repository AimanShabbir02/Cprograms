#include<stdio.h>
using namespace std ;
int main (){
    int accountNumber(0);
    printf("\nEnter account number (or -1 to quit): ");
    scanf("%d",&accountNumber) ;
    while ( accountNumber != -1) {
        double beginningBalance(0) ,totalCharges(0),
        totalCredits(0) , creditLimit(0) ,newBalance(0);
       printf("Enter beginning balance: " );
       scanf("%d",&beginningBalance) ;
       printf("Enter total charges: ");
       scanf("%d",&totalCharges);
       printf("Enter total credits: ");
       scanf("%d",&totalCredits) ;
       printf("Enter credit limit: ");
       scanf("%d",&creditLimit); 
       newBalance = (beginningBalance + totalCharges - totalCredits) ;
       printf("\nNew balance is ",newBalance);
       if(totalCredits>creditLimit){
           printf(" Credit Limit Exceeded \n" );
       }
       printf("\nEnter account number (or -1 to quit): ");
       scanf("%d",&accountNumber) ;
    }
}
