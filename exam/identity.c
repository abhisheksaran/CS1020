#include<stdio.h>
int main()
{
	int i,j,m,n;
	printf("enter the dimensions of matrix\n");
	scanf("%d %d",&m,&n);

	int a[m][n];

if(m==n)
{
	printf("enter the entries of matrix one by one\n");//press enter after each entry a[i][j]
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);		
		}
	}
}

else
{
printf("matrix is not even a square matrix!!\n");
return 0;
} 

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==i)
			{
				if(a[i][j]!=1)
				{printf("*matrix is not a identity matrix!!\n");
				return 0;}
			}
			else
			{
				if(a[i][j]!=0)
				{printf("**matrix is not a identity matrix!!\n");
				return 0;}	
								
			}
				
		}
	}
	
	printf("matrix is identity matrix\n");

	return 0;
}

