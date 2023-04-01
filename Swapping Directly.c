# include<stdio.h>

int main(){
    
    int a,b;
    
    printf("Enter First Number : ");
    scanf("%d",&a);
    
    printf("Enter Second Number : ");
    scanf("%d",&b);
    
    printf("Two numbers before swapping are : %d %d \n",a,b);
    
    a = a - b;
    b = a + b;
    a = b - a;
    
    printf("Two numbers after swapping are : %d %d \n",a,b);
    
    return 0;
}