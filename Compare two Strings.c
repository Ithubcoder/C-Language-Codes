# include<stdio.h>

# include<string.h>

/* WAP to compare two strings by using In-Built functions. */

void main(){

    char lst1[] = "COPY";
    char lst2[] = "TROPHY";
    int m, n, o;

    m = strcmp(lst1,"COPY");
    n = strcmp(lst1,lst2);
    o = strcmp("f",lst2);

    printf("%d %d %d",m,n,o);
}