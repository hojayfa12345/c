#include<stdio.h>
main()
{
int i,j,n;
float t,sum,x;
printf("enter the value of x in degree\n");
scanf("%f",&x);
x=x*3.14/180;
t=x;
sum=x;
for(i=1;i<50;i++)
{
	 //t=(t*(-1)*x*x)/(2*i*(2*i+1));
 t=(t*(-1)*x*x)/((2*i)*(2*i+1));
 sum=sum+t;
}
printf("the sin series value is %.2f",sum);
}