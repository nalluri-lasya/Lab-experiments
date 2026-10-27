// lear year or non leap year
#include<stdio.h>
#include<math.h>

void main()
{
int year;
printf("Enter the required year:");
scanf("%d",&year);
if ((year%400==0)||(year%4==0&&year%100!=0))
    { printf("\n The year is a leap year"); }
 else {
        printf("\n the year is not a leap year"); }
         
}               
      
     
    