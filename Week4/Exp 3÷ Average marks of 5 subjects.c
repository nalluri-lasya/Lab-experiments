// average marks of 5 subjects marks
#include<stdio.h>

void main()
{
float s1,s2,s3,s4,s5,total,avg;
printf("Enter the marks of all subjects s1,s2,s3,s4,s5:");
scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
total=s1+s2+s3+s4+s5;
avg=total/5;
printf("the total sum of all subjects is %f",total);
printf("\n the average marks is %f",avg);
}
    