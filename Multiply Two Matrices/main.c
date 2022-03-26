#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Ashish Vishwakarma  Github :- Aksharma2799

    int row, column, a[100][100], b[100][100], Mul[100][100], i, j;

    printf("Enter the number of rows (between 1-100): ");
    scanf("%d", &row);
    printf("Enter the number of columns (between 1-100): ");
    scanf("%d", &column);

    // Code for input 1st matrix
    printf("\nEnter elements of 1st matrix : \n");
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++) {
            printf("Enter element %d%d : ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    // Code for input 2nd matrix
    printf("Enter elements of 2nd matrix : \n");
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++) {
            printf("Enter element %d%d : ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }

    // code for multiplication 1st and 2nd matrices
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++) {
            Mul[i][j] = a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
        }

    // printing the Mul of matrix
    printf("\nMul of two matrices: \n");
    for (i=0; i<row; i++)
        for (j=0; j<column; j++) {
            printf("%d   ", Mul[i][j]);
            if (j==column-1) {
                printf("\n");
            }
        }

    return 0;
}
