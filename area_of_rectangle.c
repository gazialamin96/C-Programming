/*C program to find area of a rectangle.*/
 
#include <stdio.h>
 
int main()
{
    float l,b,area;
 
    printf("Enter the value of length: ");
    scanf("%f",&l);
 
    printf("Enter the value of breadth: ");
    scanf("%f",&b);
 
    area=l*b;
 
    printf("Area of rectangle: %f\n",area);
     
    return 0;
}