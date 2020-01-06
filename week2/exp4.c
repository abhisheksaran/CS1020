#include<stdio.h>

int main()
{	int x,y;
	printf("Enter x:");
	scanf("%d",&x);
	printf("Enter y:");
	scanf("%d",&y);
	
	if (x>y){
	printf(" %d is greater then %d!\n",x,y);
	}
	else{
	printf("%d is greater then %d!\n",y,x);
	}
	
	return 0;
}
