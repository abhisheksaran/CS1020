#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("Please,enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);

	if((c>=a&&a>=b)||(b>=a)&&(a>=c))d=a;
	else if((a>=b&&b>=c)||(c>=b&&b>=a))d=b;
	else if((a>=c&&c>=b)||(b>=c&&c>=a))d=c;

	printf("middle is %d\n",d);
	return 0;
}

