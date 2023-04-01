# include<stdio.h>

/* WAP to print Fibonacci series by recursion. */

int fib(int);

int main(){
    int n, i=0, result;

    printf("Enter the Number of terms : ");
    scanf("%d",&n);
    printf("Fibonacci Series : \n");

    for(i=0;i<n;i++){
        result = fib(i);
        printf("%d \n",result);
    }
    return 0;
}

int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    else{
        return (fib(n-1) + fib(n-2));
    }
}