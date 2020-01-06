#include<stdio.h>

int len_str(char a[])
{	int i;
	for(i=0;;i++)
	{
	if(a[i]==0)
	break;	
	}
	
	return i;
}

int sub_str(char a[],int len1,char b[],int len2)
{int i,j;
	for(i=0;i<=len2-len1;i++)
	{
		for(j=0;j<len1;j++)
		{
			if(a[j]!=b[i+j])
			break;
				
		}
	if(j==len1)
	return 1;	
	}
	return 0;
}

int main()
{	int i,j,ans;
	char str1[50];
	char str2[50];     

	printf("enter first string\n");
	scanf("%49[^\n]s",str1);
	i=len_str(str1);

	printf("enter second string\n");
	scanf(" %49[^\n]s",str2);
	j=len_str(str2);

	ans=sub_str(str1,i,str2,j);

	if(ans==1)
	printf("%s is a substring of %s\n",str1,str2);
	else
	printf("%s is not a substring of %s\n",str1,str2);
	return 0;
}

