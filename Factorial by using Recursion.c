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

    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    else{
        return (n * fact(n-1));
    }
}