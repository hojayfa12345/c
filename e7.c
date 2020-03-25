#include<stdio.h>
main()
{
 char ch;
 printf("press any key without n or N for noisy sound");
 ch=getche();
 while((ch!='n')&& (ch!='N'))
 {
  putch('\a');
  putch('\b');
  ch=getche();
 }
 printf("\n\nthank you for not hairing a noisy sound");
}