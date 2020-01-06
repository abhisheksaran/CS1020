#include<stdio.h>

int main()
{
	int marks;
	char grade;

	printf("please enter your grade:");
	scanf("%c",&grade);
	
	switch(grade)
	{
	case 'A':
	printf("marks is >=90\n");
	break;

	case 'B':
	printf("marks is bw 80 to 89\n");
	break;

	case 'C':
	printf("marks is bw 70 to 79\n");
	break;

	case 'D':
	printf("marks is bw 60 to 69\n");
	break;

	case 'E':
	printf("marks is bw 50 to 59\n");
	break;

	case 'F':
	printf("marks is bw 40 to 49\n");

	default:
	printf("if you wre fail then your marks are < 40\n");
	break;
	}
	return 0;
}
