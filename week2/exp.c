//exp.c, this program gives us the largest and tha smallest number out of three number*/
#include<stdio.h>

int main()
{//bracket is missed
	int a,b,c,d,e;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);//ampersand is missed before d
	printf("Enter a number:");
	scanf("%d",&c);
	d=a;//semicolan is missed
	e=d;//semicolan is missed
	if(b>d)d=b;//there should be no semiclon just after if statement
	else e=b;
	if(c<e) e=c;
	if(c>d) d=c;
	printf("%d, %d\n",d,e);//a backslash is missed in newline character
	
}

