# include<stdio.h>

/* WAP to count the number of vowels present in the given string. */

void main(){

    char list[]="PROGRAMMING";
    int i=0, count=0, a, b;

    while(list[i] != '\0'){
        
        a = (list[i] =='a' || list[i] =='e' || list[i] =='i' || list[i] =='o' || list[i] =='u');
        b = (list[i] =='A' || list[i] =='E' || list[i] == 'I' || list[i] =='O' || list[i] =='U');

        if (a || b){
            count++;
        }

        i++;
    }

    printf("The number of vowels present in the string are : %d",count);
}