#include<stdio.h>
int main()
{	int i,j,n;

	printf("please enter the value of n:");
	scanf("%d",&n);

	int thirdmax=0;
	int secmax=0;
	int maxm=0;
	int minm=0;
	int secmin=0;
	for(j=1;j<=n;j++)
	{
	printf("please enter the number where j is %d:",j);
	scanf(" %d",&i);

	
	if(i>maxm)
		{
		thirdmax=secmax;
		secmax=maxm;
		maxm=i;
		}
	if(i<maxm && i>secmax)
		{
		thirdmax=secmax;
		secmax=i;
		}
	if(i<secmax && i>thirdmax)
		{
		thirdmax=i;		
		}
	if(i>minm && i<secmin)
		{
		secmin=i;
		}
	if(i<minm)
		{
		secmin=minm;
		minm=i;	
		}
	if(j==1)
		{
		maxm=i;
		secmin=i;
		}

	if(j==2)
		{
		secmin=maxm;
		minm=secmax;
		}
		

	//printf("maxm is %d\n second maxm is %d\n third maxm is %d\n  minm is %d\n second minm is %d\n",maxm,secmax,thirdmax,minm,secmin);	
	
	}
	printf("third maxm is %d \nsecond minm is %d\n",thirdmax,secmin);


	return 0;
}
