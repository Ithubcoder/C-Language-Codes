# include<stdio.h>

void main(){

    int i, j, rows;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(j=rows;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
}