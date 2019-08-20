#include <stdio.h>

int main()
{
	int fact, i,n;
	printf(" Enter the value for n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact= fact* i;
	printf("%d", i);
	return 0;
}