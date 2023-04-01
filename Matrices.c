# include<stdio.h>

void main(){

    int i, j, k, m, n;

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

    int mat2[m][n];

    printf("Enter the Elements of Matrix 2 : \n"); // Input of Matrix 2

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 1 is : \n"); // Output of Matrix 1

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",mat1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2 is : \n"); // Output of Matrix 2

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",mat2[i][j]);
        }
        printf("\n");
    }

    int mat3[m][n]; // Addition of Matrix {LOGIC}

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
        printf("\n");
    }

    printf("Addition of Matrix is : \n"); // Addition of Matrix {OUTPUT}

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d  ",mat3[i][j]);
        }
        printf("\n");
    }

    int mat4[m][n]; // Subtraction of Matrix {LOGIC}

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            mat4[i][j] = mat1[i][j] - mat2[i][j];
        }
        printf("\n");
    }

    printf("Subtraction of Matrix is : \n"); // Subtraction of Matrix {OUTPUT}

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d  ",mat4[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of Matrix 1 is : \n"); // Transpose of Matrix {OUTPUT}

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d  ",mat1[j][i]);
        }
        printf("\n");
    }

    printf("Transpose of Matrix 2 is : \n"); // Transpose of Matrix {OUTPUT}

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d  ",mat2[j][i]);
        }
        printf("\n");
    }

    int mat5[m][n]; // Multiplication of Matrix {LOGIC}

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            mat5[i][j] = 0;
            for(k=0;k<m;k++){
                mat5[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Multiplication of the Matrix is : \n"); // Multiplication of Matrix {OUTPUT}

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d  ",mat5[i][j]);
        }
        printf("\n");
    }
}