#include<iostream>
using namespace std ;
int main (){
    double a(0),b(0),c(0);
    printf("\nEnter the value of A :");
    scanf("%d",&a);
    printf("Enter the value of B :");
    scanf("%d",&b);
    printf("Enter the value of C :");
    scanf("%d",&c);
    if(a*a + b*b == c*c){
        printf("\n A and B they could represent the sides of a right triangle ");
    }
    else{
        printf("\n A and B could not represent the sides of a right triangle ") ;
    }
    if(b*b + c*c == a*a){
        printf("\n B and C they could represent the sides of a right triangle ");
    }
    else{
        printf("\n B and C could not represent the sides of a right triangle ");
    }
    if(a*a + c*c == b*b){
        printf("\n A and C they could represent the sides of a right triangle ");
    }
    else{
        printf("\n A and C could not represent the sides of a right triangle ");
    }
}
