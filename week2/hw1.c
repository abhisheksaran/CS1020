#include<stdio.h>

int main()
{	int a,b;
	printf("Enter the value of a and b , respectively:");
	scanf("%d%d",&a,&b);

	if (a%2==0)
	{
	if(b%2==0)
	printf("The sum of %d and %d is EVEN!\n",a,b);
	else
	printf("The sum of %d and %d is ODD!\n",a,b);
	}

	else
	{
	if(b%2==0)
	printf("The sum of %d and %d is ODD!\n",a,b);
	else
	printf("The sum of %d and %d is EVEN!\n",a,b);
	}
	return 0;
}
