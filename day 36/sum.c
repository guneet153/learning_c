//Find the sum of all elements in a matrix.
#include<stdio.h>
int main()
{
    int matrix[100][100],rows,cols,i,j,sum=0;
    printf("Enter number of rows and columns\n");
    scanf("%d%d",&rows,&cols);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
        {
            scanf("%d",&matrix[i][j]);
            sum=sum+matrix[i][j];
        }
    printf("The sum of all elements in the matrix is %d\n",sum);
    return 0;
    //
}
