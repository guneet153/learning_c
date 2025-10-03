//check if a matrix is symmetric.
#include<stdio.h>
int main()
{
    int matrix[100][100], rows, cols, i, j, isSymmetric = 1;
    printf("Enter number of rows and columns\n");
    scanf("%d%d", &rows, &cols);
    if(rows != cols) {
        printf("Matrix is not symmetric as it is not square.\n");
        return 0;
    }
    printf("Enter the elements of the matrix\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            if(matrix[i][j] != matrix[j][i])
                isSymmetric = 0;
    
    if(isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");
    
    return 0;
}
