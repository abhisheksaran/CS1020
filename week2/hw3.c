#include<stdio.h>

int main()
{	int a,b,c;
	printf("Enter the value of a,b and c respectively:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b)
	{
	if((b!=c)||(b==c))
	printf("YES!\n");
	else
	printf("NO!\n");
	}

	else {if(b==c)
	printf("YES!\n");
	else if(a==c)
	printf("YES!\n");
	else
	printf("NO!\n");
	}
	return 0;
}

