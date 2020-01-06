#include<stdio.h>

int main()
{	int a,b;
	printf("Enter the value of a and b , respectively:\n");
	scanf("%d%d",&a,&b);

	if(b==2&&a%2!=0)
	printf("The value of %d/%d rounded to nearest integer would be= %d\n",a,b,(a+1)/b);
	else
	printf("The value of %d/%d rounded to nearest integer would be= %.0f\n",a,b,(float)a/b);
	return 0;
}
/* if lines 8 9 and 10 are removed , the answers would be according to standard rounded law in which 3.5 rounded to 4 and 2.5 rounded to 2..*/
