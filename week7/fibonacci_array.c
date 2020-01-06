#include <stdio.h>
int main()
{
	int a[10];
	int count=0;
	int countNext=1;
	int temp;
	int i;
	for(i=0;i<20;i++)
	{a[i]=count;
	temp=countNext;
	countNext=count+countNext;
	count=temp;
	}
	for(i=0;i<20;i++)
	{
	printf("%d\n",a[i]);	
	}

	printf("\n REVERSE ORDER:\n");
	for(i=19;i>=0;i--)
	{
	printf("%d\n",a[i]);	
	}
	
	
	return 0;
}
