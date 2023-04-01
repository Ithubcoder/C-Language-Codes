# include<stdio.h>

// Program to calculate total expenses when the quatity is greater than 1000 at the discount of 10%

int main(){
    
    int qty,disc=10,total,rate;
    
    printf("Enter Quantity : ");
    scanf("%d",&qty);
    
    printf("Enter Rate : ");
    scanf("%d",&rate);
    
    if (qty > 1000)
    printf("Total Expenses are : %d \n",qty*rate*disc/100);
    else
    printf("Total Expenses are : %d \n",qty*rate);
    
    return 0;
}