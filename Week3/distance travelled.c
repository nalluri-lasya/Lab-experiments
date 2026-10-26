// area of a triangle by herons formula
#include<stdio.h>

void main()
{
float u,t,a,s;
printf("enter the initial velocity:");
scanf("%f",&u);
printf("enter the time taken:");
scanf("%f",&t);
printf("enter the acceleration:");
scanf("%f",&a);
s=u*t+(0.5*a*t*t);
printf("the distance travelled is %f",s);

}
    