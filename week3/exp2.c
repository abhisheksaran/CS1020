#include<stdio.h>

int main()
{
	int marks;
	char grade;

	printf("Please,enter the marks:");
	scanf("%d",&marks);

	if(marks>=90)grade='A';
	else if(marks>=80) grade='B';
	else if(marks>=70) grade='C';
	else if(marks>=60) grade='D';
	else if(marks>=50) grade='E';	
	else if(marks>=40) grade='F';
	
	printf("Your grade is %c\n",grade);

	if(marks<40)
	printf("fail\n");
	
	return 0;
}
