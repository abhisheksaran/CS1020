#include<stdio.h>

int main()
{

	FILE *fp;
	FILE *fop;
	char filename[100];
	char filename_out[100];
	char x[2];

	int r[500][500];
	int g[500][500];
	int b[500][500];
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
	fprintf(fop,"P2");

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
		fscanf(fp," %d",&r[i][j]);
		fscanf(fp," %d",&g[i][j]);	
		fscanf(fp," %d",&b[i][j]);				
		}
	
	fprintf(fp,"\n");		
	}


	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		int p =(r[i][j]+g[i][j]+b[i][j])/3;
		fprintf(fop,"%d ",p);
		}
	fprintf(fop,"\n");		
	}



	fclose(fop);
	fclose(fp);
	




	return 0;
}
