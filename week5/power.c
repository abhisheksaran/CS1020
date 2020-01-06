#include<stdio.h>

int main()
{ 
	int a,b,power,counter;
	printf("Give a \n");
	scanf(" %d",&a);
	printf("Give b \n");
	scanf(" %d",&b);

	power=1;
	counter=1;
	while(counter<=b)
	{
		power*=a;
		counter++;	
	}
	printf("%d^%d is equal to %d.\n",a,b,power);

	return 0;
}
