#include<stdio.h>

int main()
{	int a,b,c;
	printf("Enter the value of a,b and c respectively:\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(b>c))
	printf("decending\n");
	else if((c>b)&&(b>a))
	printf("ascending\n");
	else
	printf("neither\n");
	return 0;
}
