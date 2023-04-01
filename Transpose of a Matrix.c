# include<stdio.h>

/* WAP to find the transpose of a Matrix. */

int main(){

    int original_matrix[3][3], i, j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the value of Matrix 1 at %d%d : ",i,j);
            scanf("%d",&original_matrix[i][j]);
        }
    }

    printf("Original Matrix is :- \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",original_matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transposed Matrix is :- \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",original_matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}