#include <stdio.h>
#include <string.h>/* To include the string functions like strstr() */
#include<ctype.h> /* To include the string functions like tolower() */
int main()
{
	char small[100], big[200];
	char *p;
	int offset;

	printf("Enter the small string: ");
	scanf(" %199[^\n]s",small);

	printf("Enter the big string: ");
	scanf(" %99[^\n]s",big);

printf("scanning is done!!\n");
	char tolower_small[100];
	int i=0;
	while(small[i]!=0)
	{
		tolower_small[i]=tolower(small[i]);
	}
p = strstr(big,tolower_small);

	if(p == 0)
	printf("%s is not contained in %s\n",tolower_small, big);
	else
	{
	offset = (int) (p - big);
	printf("%s is contained in %s, starting from position %d\n", tolower_small, big, offset);
	}
printf("scanning is done!!\n");
return 0;
}
