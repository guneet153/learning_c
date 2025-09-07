#include<stdio.h>
int main(){
    int sides,side1,side2,side3;
    printf("enter number of sides");
    scanf("%d",&sides);
    if (sides ==3)
    printf("its a valid traingle");
    else
    printf("its not a valid triangle");
    printf("enter side1,side2,side3");
    scanf("%d%d%d",&side1,&side2,&side3);
    if (side1==side2 && side2==side3 && side1==side3)
    printf("its an equilateral triangle");
    else if (side1==side2 || side2==side3 ||side1==side3)
    printf("its an isosceles triangle");
    else if( side1!=side2 && side2!=side3 && side1!=side3)
    printf("its a scalene triangle");
    return 0;
}








