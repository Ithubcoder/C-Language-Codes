# include<stdio.h>

# include<string.h>

/* WAP to conver string into lowercase or uppercase by using In-Built functions. */

void main(){
    char str[] = "Hello WORLD there.";

    printf("Lowercase String conversion : %s \n",strlwr(str));

    printf("Uppercase String conversion : %s \n",strupr(str));
}