# include<stdio.h>

void main(){

    FILE *ptr;
    char ch;
    int space = 0, tab = 0, new_line = 0, character = 0;
    ptr = fopen("file.txt","r");

    while(1){

        ch = fgetc(ptr);

        character++;

        if(ch == EOF){
            break;
        }

        if(ch == '\n'){
            new_line++;
        }

        if(ch == ' '){
            space++;
        }

        if(ch == '\t'){
            tab++;
        }
    }

    printf("Number of Characters are : %d \n",character);
    printf("Number of New Lines are : %d \n",new_line);
    printf("Number of Tabspaces are : %d \n",tab);
    printf("Number of Backspaces are : %d \n",space);
}