//Write a program to implement a basic calculator using switch-case for +, -, *, /, %
#include<stdio.h>
int main()
{
    int a,b,c ,choice;
    printf("enter the value of a,b");
    scanf("%d%d",&a,&b);
printf("enter choice");
scanf("%d",&choice);
switch(choice)
{
    case1: c=a+b;
    printf("%d",c);
    break;
    case2: c=a-b;
    printf("%d",c);
    break;
    case3: c=a*b;
    printf("%d",c);
    break;
    case4: c=a/b;
    printf("%d",c);
    break;
    case5: c=a%b;
    printf("%d",c);
    break;
    default: printf("invalid choice");

}
return 0;
}