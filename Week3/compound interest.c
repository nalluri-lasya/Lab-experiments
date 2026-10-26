//to find compound interest 
#include<stdio.h>
#include<math.h>
void main()
{
double p,t,r,ci;
printf("Enter the value of principal amount:");
scanf("%lf",&p);
printf("Enter the value time in months:");
scanf("%lf",&t);
printf("Enter the value of rate of interest :");
scanf("%lf",&r);
ci=p*pow((1+r/100),t)-p;
printf("the compound interest is %lf",ci);


}

    