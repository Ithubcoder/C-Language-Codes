# include<stdio.h>

// Program to find greatest among three numbers without using logical operator.

int main(){
    
    int n1,n2,n3;
    
    printf("Enter First Number : ");
    scanf("%d",&n1);
    
    printf("Enter Second Number : ");
    scanf("%d",&n2);
    
    printf("Enter Third Number : ");
    scanf("%d",&n3);
    
    // If n1 is greater than n2 & n3 then, n1 is the largest.
    if (n1 >= n2)
    if (n1 >= n3)
    printf("n1 is the largest i.e; %d",n1);
    
    // If n2 is greater than n1 & n3 then, n2 is the largest.
    if (n2 >= n1)
    if (n2 >= n3)
    printf("n2 is the largest i.e; %d",n2);
    
    // If n3 is greater than n1 & n2 then, n3 is the largest.
    if (n3 >= n1)
    if (n3 >= n2)
    printf("n3 is the largest i.e; %d",n3);
    
    return 0;
    
}