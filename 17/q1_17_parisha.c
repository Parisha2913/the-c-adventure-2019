#include <stdio.h>

void main()
{
	int r,n,sum,temp;
	sum=0;
	printf(" Enter the number");
	scanf("%d",&n);
	temp=n;
	while (n>0)
	{
		r= n % 10;
		sum= sum + r*r*r;
		n= n / 10;
	}
	if(temp== sum)
	printf("It is Armstrong no");
	else
	printf("It is not Armstrong no");
}