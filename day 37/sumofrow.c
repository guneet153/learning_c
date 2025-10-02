//Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>
int main()
{
    int matrix[100][100], rows, cols, i, j, rowSum[100];
    printf("Enter number of rows and columns\n");
    scanf("%d%d", &rows, &cols);
    printf("Enter the elements of the matrix\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    
    for(i = 0; i < rows; i++)
    {
        rowSum[i] = 0; 
        for(j = 0; j < cols; j++)
        {
            rowSum[i] += matrix[i][j];
        }
    }
    
    printf("The sum of each row is:\n");
    for(i = 0; i < rows; i++)
        printf("Sum of row %d: %d\n", i + 1, rowSum[i]);
    
    return 0;
}