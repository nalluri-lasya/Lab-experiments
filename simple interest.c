//  to find simple interest
#include<stdio.h>
void main()
{
float p,t,r,si;
printf("Enter the value of principal amount in Rupees:");
scanf("%f",&p);
printf("Enter the term duration in months:");
scanf("%f",&t);
printf("Enter the rate of interest:");
scanf("%f",&r);
si=(p*t*r)/100;
printf(" The simple interest is %f",si);

}
