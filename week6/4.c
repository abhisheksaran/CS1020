#include<stdio.h>

int main()
{	int a[20],n,num,counter,found,position;
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
	
		printf("enter the number to serach:");
		scanf("%d",&num);

		found=0;
		counter=0;
		while(counter<n)
		{
			if(a[counter]==num)
				{found=1;
				position=counter;}	
			counter++;
			
		}
		if(found==0)
			printf("searched number not found\n");
		else
			printf("searched number %d found at position %d\n",num,position);

	}
	return 0;
}
