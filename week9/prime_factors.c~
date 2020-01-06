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
	printf("which number's prime factors you want? ");
	scanf(" %d", &n);

	printf("prime factors of %d are\n",n);
 for(i=2;i<=n;i++)
	if(n%i==0)
{	if(is_prime(i))
	printf(" %d\n",i);	
}
	
	return 0;
}

