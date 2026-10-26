// area of a triangle by herons formula
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,s,area;
printf("Enter the length of sides of triangle in cm a,b,c:");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("the area of triangle using herons formula is %f cm square",area);

}

    