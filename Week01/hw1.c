/*Purrpose of program :to read an integer and display its square*/
#include<stdio.h>

int main()
{	int number;
	printf("Enter the number you want to square:");
	scanf("%d",&number);
	
	printf("The square of %d is %d\n",number,number*number);
	return 0;
}
