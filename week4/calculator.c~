#include <stdio.h>
int main()
{
	float x,y,ans;
	char op;
	 	scanf("%f %c %f", &x, &op, &y);
		
	while(op!='?')
	{

		if(op == '+')
		{
		ans = x + y;
		printf("%g\n\n", ans);
		}
		else if(op=='-')
		{
		ans = x - y;
		printf("%g\n\n", ans);
		}
		else if(op=='*')
		{
		ans = x*y;
		printf("%g\n\n", ans);
		}
		else if(op=='/')
		{
			if(y!=0)
				{
				ans = x/y;
				printf("%g\n\n", ans);
				}
			else
			printf("devision by zero!!!\n\n");
		}
		else
		printf("Syntax error.\n\n");

		scanf("%f %c %f", &x, &op, &y);
	}

	return 0;
}
