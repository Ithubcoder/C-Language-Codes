# include<stdio.h>

// Program to swap two numbers using third variable

int main(){
    
    int a,b,c;
    
    printf("Enter First Number : ");
    scanf("%d",&a);
    
    printf("Enter Second Number : ");
    scanf("%d",&b);
    
    printf("Two numbers before swapping are : %d %d \n",a,b);
    
    c = a;
    a = b;
    b = c;
    
    printf("Two numbers after swapping are : %d %d \n",a,b);
    
    return 0;
}