# include<stdio.h>

# include<string.h>

/* WAP to concatenate two strings by using In-Built functions. */

void main(){

    char org1[20]="BEFORE";
    char org2[20]="AFTER";

    strcat(org2,org1);

    puts(org2);
}