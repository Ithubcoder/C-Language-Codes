#include<stdio.h>

// WAP to find the Factorial of a number.

int main(){

    int n,i,fact=1;

    printf("Enter a Number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        fact = fact * i;
    }
    printf("Factorial is : %d",fact);

    return 0;
}