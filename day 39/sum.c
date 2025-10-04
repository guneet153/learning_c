//Find the sum of main diagonal elements for a square matrix.
#include<stdio.h>
int main()
{
    int matrix[100][100], rows, cols, i, j, sum = 0;
    printf("Enter number of rows and columns\n");
    scanf("%d%d", &rows, &cols);
    if(rows != cols) {
        printf("Matrix is not square, so it doesn't have a main diagonal.\n");
        return 0;
    }
    printf("Enter the elements of the matrix\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    
    for(i = 0; i < rows; i++)
        sum += matrix[i][i];
    
    printf("The sum of the main diagonal elements is %d\n", sum);
    return 0;
}
