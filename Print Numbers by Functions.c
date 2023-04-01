#include<stdio.h>

// WAP to print the numbers by using function.

void func();

int main(){


    func();
    func();
    func();

    return 0;
}

void func(){

    int i;

    for(i=50;i>=1;i--){

        printf("%d \n",i);
    }
}