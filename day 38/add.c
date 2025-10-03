//Add two matrices.
#include<stdio.h>
int main()
{
    int matrix1[100][100], matrix2[100][100], sum[100][100];
    int rows, cols, i, j;
    
    printf("Enter number of rows and columns\n");
    scanf("%d%d", &rows, &cols);
    
    printf("Enter the elements of the first matrix\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix1[i][j]);
    
    printf("Enter the elements of the second matrix\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix2[i][j]);
    
    // Adding the two matrices
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
    
    printf("The sum of the two matrices is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    
    return 0;
}
