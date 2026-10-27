// electricity bill
#include<stdio.h>

void main()
{
float units,total_bill;
printf("Enter the total units consumed:");
scanf("%f",&units);
if (units<=100)
    { total_bill=units*1.50; }
else if (units<=200)
      { total_bill=1.50*100+((units-100)*2.5); }
      else if (units<=500)
           { total_bill=100*1.50+100*2.50+((units-200)*4.00); }
           else{ total_bill=100*1.50+100*2.50+300*4.00+((units-500)*6.00); }
 printf("the total units consumed is %f",units);
 printf("\nthe total bill is %f",total_bill);         
       
}
      
     
    