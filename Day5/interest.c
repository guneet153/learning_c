//Write a program to calculate simple and compound interest for given principal, rate, and timeWrite a program to calculate simple and compound interest for given principal, rate, and time
#include<stdio.h>
int main()
{
    float principal, rate, time, simple_interest, compound_interest;
    
    // Input principal, rate and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    
    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;
    
    // Calculate compound interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;
    
    // Output the results
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    
    return 0;
}