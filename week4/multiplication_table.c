#include<stdio.h>

int main()
{
	int n,i;
	printf("Please! enter an integer:");
	scanf("%d",&n);

	printf("Multiplication table of 5\n=========================\n");
	
	i=1;
	while(i<=16)
	{
	printf("%d x %2d = %2d\n",n,i,n*i);
	++i;	
	}
	printf("=========================\n");
	return 0;
}
