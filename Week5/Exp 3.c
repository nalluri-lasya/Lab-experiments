// roots of quadratic equation
#include<stdio.h>
#include<math.h>

void main()
{
float a,b,c,discriminate,root1,root2,real_part,imaginary_part;
printf("enter the values of a,b,c:");
scanf("%f%f%f",&a,&b,&c);
discriminate=b*b-4*a*c;
if (discriminate>0)
{ root1=(-b+sqrt(discriminate)/2*a);
  root2=(-b-sqrt(discriminate)/2*a);
  printf("the roots are real and distinct");
  printf("\n the roots of equation are %f,%f",root1,root2);
  }
  else if (discriminate==0)
       { root1=root2=-b/2*a;
         printf("the roots are real and equal");
         printf("\n root1=root2=%f",root1);
         }
         else {
              real_part=-b/2*a;
              imaginary_part=sqrt(-discriminate)/(2*a);
              printf("roots are imaginary and different");
              printf("\n root1= %f+%fi",real_part,imaginary_part);
              printf("\n root2= %f+%fi",real_part,imaginary_part);
              }   
}
      
     
    