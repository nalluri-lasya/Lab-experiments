//  to change temperatures from Fahrenheit to celcius and vice versa
#include<stdio.h>
void main()
{
float c,f;
// celcius to Fahrenheit 
printf("Enter the value of celcius:");
scanf("%f",&c);
f=(c*(9.0/5.0))+32;
printf("\n the temp in Fahrenheit is %f",f);
// Fahrenheit to celcius
printf("\n enter the value of Fahrenheit:");
scanf("%f",&f);
c=(f-32)*5.0/9.0;
printf("\n the value of temp in celcius is %f",c);

}

    