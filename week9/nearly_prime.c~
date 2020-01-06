#include <stdio.h>

int is_prime(int a)
{
	int i;
	if(a < 2)
	return(0);
	/* a is not prime */
	for(i = 2; i < a; i++)
	if(a % i == 0)
	return(0);

	return(1);
}
int main()
{
	int n, i;
	int ans;

	printf("enter a positive number: ");
	scanf(" %d", &n);
	if(is_prime(n)){
	printf("%d is a prime number\n",n);
	return 0;}

	int count =0;
	for(int i=2;i<n;i++)
	{
	if(n%i==0)
		{
		if(is_prime(i))
			count++;

		else	{
			printf("far from prime\n");
			return 0;}
		}
	}

if(count>2)
printf("far from prime\n");
else
printf("nearly prime\n");

return 0;
}	


	
	
	
	
