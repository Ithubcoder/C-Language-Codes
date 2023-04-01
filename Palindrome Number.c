#include <stdio.h>

// WAP to check whether a number is palindrome or not.

int main(){

  int n, reverse = 0, remainder, original;
    
    printf("Enter a Number : ");
    scanf("%d",&n);
    original = n;

    // reversed integer is stored in reverse variable
    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reverse)
        printf("%d is a Palindrome Number.",original);
    else
        printf("%d is not a Palindrome Number.",original);

    return 0;
}