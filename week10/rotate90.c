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
	fprintf(fop,"%s",x);

	fprintf(fop,"\n");



	fscanf(fp,"%d",&m);
	fscanf(fp,"%d",&n);
	fprintf(fop,"%d ",n);
	fprintf(fop,"%d\n",m);

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


	for(j=m-1;j>=0;j--)
	{
		for(i=0;i<n;i++)
		{
		fprintf(fop,"%d ",r[i][j]);
		fprintf(fop,"%d ",g[i][j]);
		fprintf(fop,"%d ",b[i][j]);
		}
	fprintf(fop,"\n");		
	}



	fclose(fop);
	fclose(fp);
	




	return 0;
}
