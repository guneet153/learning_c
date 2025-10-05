//Perform diagonal traversal of a matrix
#include<stdio.h>
int main()
{
    int matrix[100][100], rows, cols, i, j;
    printf("Enter number of rows and columns\n");
    scanf("%d%d", &rows, &cols);
    printf("Enter the elements of the matrix\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    
    printf("Diagonal traversal of the matrix is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j <= i && j < cols; j++)
        {
            if(i - j < cols)
                printf("%d ", matrix[i - j][j]);
        }
    }
    for(i = 1; i < cols; i++)
    {
        for(j = 0; j < rows && i + j < cols; j++)
        {
            if(rows - 1 - j >= 0)
                printf("%d ", matrix[rows - 1 - j][i + j]);
        }
    }
    printf("\n");
    return 0;
}