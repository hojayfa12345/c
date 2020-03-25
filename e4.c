#include<stdio.h>
main()
{
	float i,n; 
	printf("\tGallon\tLitre\n");
	printf("\t----\t----\n");
	
	for(i=1;i<11;i++)
	{
		n=i*3.785;
		printf("\t%.2f\t%.2f\n",i,n);
	}
}