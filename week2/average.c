/*
	Progarm name: average.c
	Program discription:The program takes two integer as intput and displays their average
	date - 9 jan 18
*/
#include<stdio.h>

int main()
{
	int x,y;
	float z;
	
	printf("Enter the first number:");
	scanf("%d",&x);

	printf("Enter the second number:");
	scanf("%d",&y);

	z=(x+y)/2.0;

	printf("The average of %d and %d is %.2f.\n",x,y,z);
	return 0;
}
