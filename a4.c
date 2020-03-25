#include<stdio.h>
main()
{
 int a,b,c;
 char ch;
 do{
 printf("\nenter the first number\n");
 scanf("%d",&a);
 printf("\nenter the second number\n");
 scanf("%d",&b);
 c=a+b;
 printf("\nthe sum is %d",c);
  printf ("\nDo you want to repeat the operation Y/N: ");
   scanf(" %c",&ch);
  }
  while (ch=='y' || ch=='Y');

 }
