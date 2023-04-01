# include<stdio.h>

# include<string.h>

/* WAP to copy string content by using In-Built functions.  */

void main(){

    char src[] = "Its a String.";

    char dest[] = "";

    printf("Source String is : %s \n",src);

    printf("Destination String is : %s \n",dest);

    strcpy(dest,src);

    printf("Targeted string after strcpy is : %s \n",dest);
}