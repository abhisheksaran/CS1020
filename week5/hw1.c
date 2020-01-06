#include<stdio.h>

int main()
{	int i,j,n,x,max,maxm_value,ans;
	int a[100];

	printf("please enter the value of n:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	printf("enter the number:");
		scanf("%d",&a[i]);
	}
	
	max=1;
	for(i=0;i<n;i++)
	{	x=0;
		for(j=i;j<n;j++)
		{	if(a[j]==a[i])
			++x;	
		}


		if(x>1&& x==max)
			{ans=0;
			break;}

		if(x>max)
			{max=x;
			maxm_value=a[i];
			ans=1;}
	}		

	if(ans==1)
	printf("The most repeated number is %d, %d times\n",maxm_value,max);
	else
	printf("No most repeated value!\n");
	

	return 0;
}


	
	

