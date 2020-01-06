#include<stdio.h>

int main()
{	int a[20],n,counter,temp;
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
		temp=a[0];
		counter=0;
		while(counter<n-1)
		{	a[counter]=a[counter+1];
			counter++;	
		}
		a[n-1]=temp;
		printf("-------\n");
		counter=0;
		while(counter<n)
		{
 			printf("%d\n",a[counter]);
			counter++;	
		}
	}

	


	return 0;
}
