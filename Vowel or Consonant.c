# include<stdio.h>

// Program to check whether a character is a vowel or consonant.

int main(){
    
    char x;
    int a,b;
    
    printf("Enter a Character : ");
    scanf("%c",&x);
    
    a = (x=='a' || x=='e' || x=='i' || x=='o' || x=='u');
    b = (x=='A' || x=='E' || x== 'I' || x=='O' || x=='U');
    
    if (a||b)
    printf("Entered Character is a Vowel.");
    else
    printf("Entered Character is a Consonant.");
    
    return 0;
}