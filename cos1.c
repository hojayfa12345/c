#include<stdio.h>
main()
{
	int i;
	float sum,t,x;
	printf("enter the value of x in degree\n");
	scanf("%f",&x);
	t=1;
	sum=1;
	x=x*3.14/180;
	for(i=1;i<10;i++)
	{
		t=(t*(-1)*x*x)/((2*i)*(2*i-1));
		sum=sum+t;
	}
	printf("the cos series value is %.2f",sum);
}