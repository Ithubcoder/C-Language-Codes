#include<stdio.h>

// WAP to print the table from loop.

int main(){

    int n,i,tab=1;

    printf("Enter a Number : ");
    scanf("%d",&n);

    for(i=10;i>0;i--){

        tab = n*i;
        printf("%d \n",tab);
    }
    return 0;
}