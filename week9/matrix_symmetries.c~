#include <stdio.h>
int main()
{
FILE *fp;
char filename[100];
float matrix[100][100];
int m, n, i, j;
int temp=0;
/* Ask the user to give the name of the file which contains the matrix */

printf("Enter the file name: ");
scanf("%s", filename);

/* Open the file for reading and check if it was opened successfully */

fp = fopen(filename, "r");
if (fp == 0)
{
printf("Error in opening the file %s.\n", filename);
return(1);
}

fscanf(fp, "%d", &m);
fscanf(fp, "%d", &n);

for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
fscanf(fp, "%f", &matrix[i][j]); /* Read one entry */
}
}

if(m!=n)
printf("matrix is not a square matrix\n ");

else
{
	for(j = 0; j < n; j++)
	{
	for(i = 0; i < n; i++)
	{
		if(matrix[i][j]==matrix[j][i])
		temp=1;
		else{
		temp=0;
		break;}
		
	}
		if(temp==0)
		break;
	}
if(temp==1)
printf("The matrix is symmetric\n" );

	for(j = 0; j < n; j++)
	{
	for(i = 0; i < n; i++)
	{
		if((matrix[i][j]+matrix[j][i])==0)
		temp=2;
		else{
		temp=0;
		break;}
	}
		if(temp==0)
		break;
	}
if(temp==2)
printf("The matrix is skew symmetric\n" );
if(temp==0)
printf("The matrix is square matrix\n" );
	
	
}
fclose(fp); /* Close the file */
return(0);
}
