#include<stdio.h>

int main()
{	int a[20],n,num,counter,c,d;
	printf("enter \n");
	scanf("%d",&n);

	counter=0;
	while(counter<n)
	{	printf("enter the next element\n");
	      	scanf("%d",&a[counter]);
		counter++;
	}
	

	printf("the upper limit:");
	scanf("%d",&d);
	printf("the lower limit:");
	scanf("%d",&c);
	
	printf("The numbers in the range of (%d,%d) are(is):\n",c,d);
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>c && a[i]<d)
		printf("%d\n\n",a[i]);		
	}
		
	return 0;
}
