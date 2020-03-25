#include<stdio.h>
main()
{
int marks;
printf("enter your marks\n");
scanf("%d",&marks);
if(marks>600)
printf("passed in 1st division");
else if(marks >=450 && marks<=599)
printf("passed in second division\n");
else if(marks >=330 && marks<=449)
printf("passed in third division\n");
else if(marks<330)
printf("sorry , failed\n");
}