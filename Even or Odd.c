# include<stdio.h>

//Program to check inputed number is even or odd.

int main(){
    
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    
    if (a%2 == 0)
    printf("Number is Even");
    else
    printf("Number is Odd");
    
    return 0;
}