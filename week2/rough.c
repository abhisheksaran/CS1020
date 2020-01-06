#include<stdio.h>

int main()
{	int a,b;
	printf("Enter the value of a and b , respectively:\n");
	scanf("%d%d",&a,&b);

	
	printf("The value of %d/%d rounded to nearest integer would be= %.0f\n",a,b,(float)a/b);
	return 0;
}
