/*Purpose of program : To read two integers and display their sum*/
#include<stdio.h>

int main()
{	int x,y;
	printf("Enter the number x:");
	scanf("%d",&x);
	printf("Enter the number y:");
	scanf("%d",&y);

	printf("The sum of %d and %d equal to %d\n",x,y,x+y);
	return 0;
}
