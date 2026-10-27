// max and min of four numbers
#include<stdio.h>

void main()
{
float a,b,c,d;
printf("Enter the values of a,b,c,d:");
scanf("%f%f%f%f",&a,&b,&c,&d);
// the max of four numbers
if(a>=b&&a>=c&&a>=d)
   { printf("the max numbers is %f",a);
   }
else
     if(b>=a&&b>=c&&b>=d)
    {  printf("%f is the max number",b);
    }
     else 
           if (c>=a&&c>=b&&c>=d)
           { printf("%f is the max number",c);
           }
           else { printf("%f is the max number",d);
           }
  
// min of the four numbers
if(a<=b&&a<=c&&a<=d)
{ printf("\n %f is the smallest",a);
}
else if(b<=a&&b<=c&&b<=d)
      { printf("\n %f is the smallest",b);
      }
      else if(c<=a&&c<=b&&c<=d)
            { printf("\n %f is the smallest number",c);
            }
            else { printf("\n %f is the smallest",d);
            }
            }
       

      
     
    
