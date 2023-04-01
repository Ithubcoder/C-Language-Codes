# include<stdio.h>

/*If a five digit number is input through the keyboard,
WAP to reverse the number.*/

int main(){

    long int num, d1, d2, d3, d4, d5, rev_num;

    printf("Enter a 5 Digit Number (Less Than 32767) : ");
    scanf("%d",&num);

    printf("Original Number is : %d \n",num);

    d1 = num % 10;
    num = num / 10;

    d2 = num % 10;
    num = num / 10;

    d3 = num % 10;
    num = num / 10;

    d4 = num % 10;
    num = num / 10;

    d5 = num % 10;
    num = num / 10;

    rev_num = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5 * 1;
    printf("Reversed Number is : %d \n",rev_num);

    return 0;
}