#include<stdio.h>
int gcd(int a,int b)
{	if(a>b&&b==0)
 	return a;
	if(b>a&&a==0)
	return b;
	

	if(a>=b)
	gcd(b,a-b);
	else
	gcd(a,b-a);
}

int main()
{	int i,j;
	printf("Please enter the two number!\n");
	scanf(" %d %d",&i,&j);

	printf("gcd of %d %d is = %d.\n",i,j,gcd(i,j));


	return 0;
}
