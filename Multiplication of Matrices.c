# include<stdio.h>

// WAP to find the Multiplication of two Matrices.

int main(){

    int mat1[2][2], mat2[2][2], mul_mat[2][2], i, j, k;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter the value of Matrix 1 at %d%d : ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter the value of Matrix 2 at %d%d : ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("Matrix 1 is :- \n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2 is :- \n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            mul_mat[i][j]=0;
            for(k=0;k<2;k++){
                mul_mat[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("Multipication of the above two Matrices are : \n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",mul_mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}