//Find the transpose of a matrix.
#include<stdio.h>
int main()
{
    int matrix[100][100], transpose[100][100], rows, cols, i, j;
    printf("Enter number of rows and columns\n");
    scanf("%d%d", &rows, &cols);
    printf("Enter the elements of the matrix\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];
    
    printf("The transpose of the matrix is:\n");
    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    
    return 0;
}
