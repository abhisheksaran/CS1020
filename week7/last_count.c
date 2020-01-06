#include <stdio.h>
int main()
{
	int a[10];
	int count;
	for(int i=0;i<10;i++)
	{
	scanf(" %d",&a[i]);	
	}
	count=0;
	for(int i=0;i<10;i++)
	{
	if(a[i]==a[9])
	{
	count++;	
	}
	}
	printf("the number of time last number is repeated is=%d\n",count);	

	count=0;
	for(int i=0;i<10;i++)
	{
	if(a[i]<a[9])
	{
	count++;	
	}
	}	
	printf("the number of entries smaller then last number is=%d\n",count);	
	
	return 0;
}
