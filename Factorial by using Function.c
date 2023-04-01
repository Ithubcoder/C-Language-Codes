# include<stdio.h>

int fact(int);

int main(){

    int n, result;

    printf("Enter a number : ");
    scanf("%d",&n);

    result = fact(n);

    printf("Factorial of the number is : %d",result);

    return 0;
}

int fact(int n){

    int fact = 1, i;

    for(i=n;i>=1;i--){
        fact = fact * i;
    }
    return fact;
}