#include<stdio.h>

// WAP to print the sum of n numbers.

int main(){

    int a,sum=0,i;

    printf("Enter a Number : ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        sum = sum + i;
    }
    printf("Sum of n numbers is : %d",sum);

    return 0;
}