#include <stdio.h>
int main()
{
	int a[100];
	int n;
	int count=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	scanf(" %d",&a[i]);	
	}

	printf("the  peak values are:\n");
	for(int j=1;j<n-1;j++)
	{
		if(a[j]>a[j-1]&&a[j]>a[j+1]){
		printf("%d\n",a[j]);
		count++;}
	}

	return 0;
}
