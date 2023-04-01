# include<stdio.h>

/*If a 5 digit number is input through keyboard,
WAP to calculate the sum of its digits.*/

int main(){

    long int num;
    int a1, a2, a3, a4, a5, sum;

    printf("Enter a 5 Digit Number (Less than 32767) : ");
    scanf("%d",&num);

    a1 = num % 10;
    num = num / 10;

    a2 = num % 10;
    num = num / 10;

    a3 = num % 10;
    num = num / 10;

    a4 = num % 10;
    num = num / 10;

    a5 = num % 10;
    num = num / 10;

    sum = a1 + a2 + a3 + a4 + a5;
    printf("Sum of Digits of the Inputed Number is : %d",sum);
}