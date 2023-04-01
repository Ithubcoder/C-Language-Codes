# include<stdio.h>

void main(){

    int i, j, m, n, sumA = 0, sumB = 0;

    printf("Enter the size of Matrix : \n"); // Size of the Matrix
    scanf("%d",&m);
    scanf("%d",&n);

    int mat1[m][n];

    printf("Enter the Elements of Matrix 1 : \n"); // Input of Matrix 1

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++){                               // Sum of Elements of Matrix 1
        for(j=0;j<n;j++){
            sumA += mat1[i][j];
        }
    }

    int mat2[m][n];

    printf("Enter the Elements of Matrix 1 : \n"); // Input of Matrix 2

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++){                               // Sum of Elements of Matrix 2
        for(j=0;j<n;j++){
            sumB += mat2[i][j];
        }
    }

    printf("Sum of Elements of Matrix 1 is : %d \n",sumA);

    printf("Sum of Elements of Matrix 2 is : %d \n",sumB);

    printf("Final Sum is : %d",sumA + sumB);
}