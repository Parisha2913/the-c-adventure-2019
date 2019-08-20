#include <stdio.h>
int add(int ,int);

void main()
{
	int a, b, sum;
	printf(" Enter the value for a ");
	scanf("%d",&a);
	printf(" Enter the value for b ");
	scanf("%d",&b);
	sum= add (a,b);
	printf("%d", sum);

}
  int add(int a, int b)
{
	int total; 
	total= a+ b;
	return(total);
}