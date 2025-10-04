//Check if the elements on the diagonal of a matrix are distinct.
#include<stdio.h>
int main()
{
    int matrix[100][100], rows, cols, i, j;
    int diagElements[100], diagSize = 0, isDistinct = 1;

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

    // Extract diagonal elements
    for(i = 0; i < rows; i++) {
        diagElements[diagSize++] = matrix[i][i];
    }

    // Check for distinctness
    for(i = 0; i < diagSize; i++) {
        for(j = i + 1; j < diagSize; j++) {
            if(diagElements[i] == diagElements[j]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct)
            break;
    }

    if(isDistinct)
        printf("The diagonal elements are distinct.\n");
    else
        printf("The diagonal elements are not distinct.\n");

    return 0;
}