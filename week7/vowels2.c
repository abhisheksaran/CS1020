#include <stdio.h>
int main()
{	char a[10];
	char *p;
	char q[10];
	p=a;
	printf("Enter a word: ");
	scanf("%s", a);
	int flag=0;
	int counter=0;
int q=0;
	while(*p!='\0')
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
		{
			counter++;
		}
		else
		{flag=1;
		printf("%c",*p);
		}

		if(flag==1)
		{
		*q=*p;
		}
	p++;
q++;	
	}
	printf("\nnumber of vowels is %d\n",counter);
	printf("%s\n",q);
	//printf("%s",q);
	
	//while(*q!='\0')
	//{
	//	printf("%p: %s\n", q, q);
	//	q = q + 1;		
	//}
	
	return(0);
}
