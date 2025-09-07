//Write a program to input two numbers and display their sum, difference, product and quotient
#include<stdio.h>
int main()
{
    int num1, num2;
    int sum, difference, product;
    float quotient;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    
    if(num2 != 0) {
        quotient = (float)num1 / num2;
        printf("The quotient of %d and %d is %.2f\n", num1, num2, quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    printf("The difference of %d and %d is %d\n", num1, num2, difference);
    printf("The product of %d and %d is %d\n", num1, num2, product);
    
    return 0;
}