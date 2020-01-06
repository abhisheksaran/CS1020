#include<stdio.h>

int main()
{
	int a,d,n,sum;
	printf("Please,enter the first term of the AP\n");
	scanf("%d",&a);
	printf("Please,enter the common difference of the AP\n");
	scanf("%d",&d);
	printf("Please,enter the value of n\n");
	scanf("%d",&n);
	sum=(n/2.0)*(2*a+(n-1)*d);
	printf("The sum of %d terms of the AP is %d\n",n,sum);
	return 0;
}

