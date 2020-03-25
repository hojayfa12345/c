#include<stdio.h>
main()
{
 int age;
 printf("enter your age\n");
 scanf("%d",&age);
 if(age<18)
 printf("\nyou can't vote");
 else
 printf("\nyou can vote");
 }