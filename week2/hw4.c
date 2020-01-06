#include<stdio.h>

int main()
{	int a,b,c,d,e;
	printf("Enter the value of a,b and c respectively:\n");
	scanf("%d%d%d",&a,&b,&c);
	d=a;
	e=d;
	if(b>d) d=b;
	else e=b;
	if(c<e) e=c;
	if(c>d) d=c;
	printf("largest is %d and smallest is %d\n",d,e);
	return 0;
}
