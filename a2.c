#include<stdio.h>
#include<conio.h>
main()
{
   //textcolor(RED);
  // cprintf("C programming");
   int i, vowel, consonant,digit,word,other;
   char string[80],c;
   i=vowel=consonant=digit=word=other=0;
   printf("program to count vowels consonent digit word \n");
   printf("and other charecter in the string\n");
   printf("enter the type of string\n");
   scanf("%s",string);
   printf("\nthe string is %s",string);
   while((c=tolower(string[i++]))!='\0')
   {
	   if(c=='a'||c=='e'||c=='i'||c=='o'|| c=='u')
		   ++vowel;
	   else if((c>'a' && c<'e')||(c>'e' && c<'i')||(c>'i' && c<'o')||(c>'o' && c<'u')||(c>'u'))
		   ++consonant;
	   else
		   if(c>='0' && c<='9')
			   ++digit;
		   else
			   if(c==' ')
				   ++word;
			   else
				   ++other;
   }
   ++word;
   printf("\n\nnumber of vowel %d",vowel);
   printf("\n\nnumber of conssonent %d",consonant);
   printf("\nnumber of digit %d",digit);
   printf("\n\nnumber of word %d",word);
   printf("\n\nnumber of other %d",other);
  // printf("number of vowel %d",vowel);
}