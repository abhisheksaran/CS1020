#include<stdio.h>

int main()

{	int n,temp;
	int a[100];
	printf("please enter the value of n:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{	printf("enter the number:");
		scanf("%d",&a[i]);
	}
	
		temp=0;

		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			temp=1;
			else{
			temp=0; 
			break;}	
			
		}
	//printf("%d\n",temp);

	if(temp==0)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]<a[j+1])
			temp=2;
			else{
			temp=0; 
			break;}	
		}
	}
	//printf("%d\n",temp);
	if(temp==0)
	printf("NEITHER!\n");
	if(temp==1)
	printf("STRICTLY DECENDING!\n");	
	if(temp==2)
	printf("STRICTLY ASCENDING!\n");	

	return 0;
}
