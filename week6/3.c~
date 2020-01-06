#include<stdio.h>

int main()
{	int a[20],n,i,counter,max,position;
	printf("enter (n<=20)\n");
	scanf("%d",&n);
	if(n>20)
	{
		printf("wrong input\n")	;
	}
	else
	{
		counter=0;
		while(counter<n)
		{	printf("enter the next element\n");
	      	 	scanf("%d",&a[counter]);
		 	counter++;
		}

		max=0;
		counter=0;
		for(i=0;i<n;i++)
		{	
		if(a[i]>max){
		max=a[i];
		position=i;}
		}
		
		a[position]=a[n-1];
		a[n-1]=max;		
	}
	

	//printf("%d\n%d",max,position);
	printf("-------\n");
	while(counter<n)
		{
 			printf("%d\n",a[counter]);
			counter++;	
		}


	return 0;
}
