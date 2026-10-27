// calculator menu
#include<stdio.h>
#include<math.h>

void main()
{
int option;
float num1,num2,result;
printf("enter the value of num1,num2:");
scanf("%f%f",&num1,&num2);
printf("operations performed based on option are \n 1.addition \n 2.subtraction \n 3.multiplication \n 4.division");
printf("\n choose your option:");
scanf("%d",&option);
switch (option) {
      case 1:
        result=num1+num2;
        printf("result=%f",result);
        break; 
      case 2:
        result=num1-num2;
        printf("result=%f",result);
        break;
     case  3:
         result=num1*num2;
         printf("result=%f",result);
        break;
     case  4:
         if (num2==0)
           { printf("division by zero is not possible"); }
           
         else {  
               result=num1/num2;
               printf("result=%f",result);}
          break; 
        default:
         printf("\n invalid option");
         break;
               }
}               
      
     
    