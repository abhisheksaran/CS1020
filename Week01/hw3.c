/*Purpose of program: A program to read a positve integer n and display the sum of numbers from 1 to n.*/
#include<stdio.h>

int main()
{	int n;
	printf("Enter a positive integer:");
	scanf("%d",&n);//computer stores the value of n in memory

	printf("The sum of numbers from 1 to %d is equal to %d\n",n, (n*(n+1)/2));
	/*give the sum by doing calculation and using the value of n from memory*/
	return 0;
 
}
