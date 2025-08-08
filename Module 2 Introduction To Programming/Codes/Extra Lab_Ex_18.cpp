//Lab Challenge 2: Pascal’s Triangle
//? Write a C program that generates Pascal’s Triangle up to N rows using loops.
//? Challenge: Implement the same program using a recursive function.
#include<stdio.h>
int factorial(int x);
int combination(int n ,int r);
//ncr = n!/r!(n-r)!
int main(){
    //n!
    int n;
    printf("Enter Value of n to print pascal Pattern: ");
    scanf("%d",&n);
   
    for(int i=0; i<=n; i++){
        for(int k=0; k<=n-i-1; k++){
            printf(" ");
          }
        for(int j=0; j<=i; j++){
             int icr = combination(i,j);
            printf("%d ",icr);
           // printf(" ");
        }
      
        printf("\n");
    }
    return 0;
}
int factorial(int x){
    int fact = 1;
    for(int i=2; i<=x; i++){
        fact *= i;
    }
    return fact;
}
int combination(int n, int r){
   int ncr = factorial(n)/(factorial(r) * factorial(n-r));
   return ncr;
}

