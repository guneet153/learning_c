//Multiply two matrices.
#include<stdio.h>
int main()
{
    int matrix1[100][100], matrix2[100][100], product[100][100];
    int rows1, cols1, rows2, cols2, i, j, k;
    
    printf("Enter number of rows and columns for the first matrix\n");
    scanf("%d%d", &rows1, &cols1);
    
    printf("Enter the elements of the first matrix\n");
    for(i = 0; i < rows1; i++)
        for(j = 0; j < cols1; j++)
            scanf("%d", &matrix1[i][j]);
    
    printf("Enter number of rows and columns for the second matrix\n");
    scanf("%d%d", &rows2, &cols2);
    
    if(cols1 != rows2) {
        printf("Matrix multiplication is not possible with the given dimensions.\n");
        return 0;
    }
    
    printf("Enter the elements of the second matrix\n");
    for(i = 0; i < rows2; i++)
        for(j = 0; j < cols2; j++)
            scanf("%d", &matrix2[i][j]);
    
    // Initializing product matrix to zero
    for(i = 0; i < rows1; i++)
        for(j = 0; j < cols2; j++)
            product[i][j] = 0;
    
    // Multiplying the two matrices
    for(i = 0; i < rows1; i++)
        for(j = 0; j < cols2; j++)
            for(k = 0; k < cols1; k++)
                product[i][j] += matrix1[i][k] * matrix2[k][j];
    
    printf("The product of the two matrices is:\n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }
    
    return 0;
}