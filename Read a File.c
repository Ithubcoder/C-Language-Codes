# include<stdio.h>

/* WAP to read the content from a text file. */

int main(){

    FILE *ptr;
    char ch;
    int count = 1;
    ptr = fopen("hello.txt","r");

    while(1){
        
        ch = fgetc(ptr);

        if(ch == EOF){
            break;
        }
        
        printf("%c",ch);
    }

    printf("\n");
    fclose(ptr);
    return 0;
}