#include<stdio.h>

int main()
{

	FILE *fp;
	FILE *fop;
	char filename[100];
	char filename_out[100];
	char x[2];

	int matrix[500][500];
	int m,n,i,j,max;

	printf("enter the input  file name\n");
	scanf("%s",filename);

	fp =fopen(filename,"r");

	printf("enter the output file name\n");
	scanf("%s",filename_out);

	fop =fopen(filename_out,"w");

	if(fp==0)
	{
	printf("error in opening the file %s.\n",filename);
	return 0;	
	}

	fscanf(fp,"%s",x);
	fprintf(fop,"%s",x);

	fprintf(fop,"\n");



	fscanf(fp,"%d",&m);
	fprintf(fop,"%d ",m);
	fscanf(fp,"%d",&n);
	fprintf(fop,"%d\n",n);

	fscanf(fp,"%d",&max);
	fprintf(fop,"%d\n",max);

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		fscanf(fp,"%d",&matrix[i][j]);		
		}
	fprintf(fop,"\n");		
	}

	for(i=0;i<n;i++)
	{
		for(j=m-1;j>=0;j--)
		{
		fprintf(fop,"%d ",matrix[i][j]);		
		}
	fprintf(fop,"\n");		
	}

	fclose(fop);
	fclose(fp);
	
	return 0;
}
