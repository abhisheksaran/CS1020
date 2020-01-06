#include<stdio.h>

int main()
{

	FILE *fp1;
	FILE *fp2;
	FILE *fop;
	char filename1[100];
	char filename2[100];
	char filename_out[100];
	char x[2];

	int matrix1[500][500];
	int matrix2[500][500];
	int m1,m2,n1,n2,i,j,pix1, pix2;
	int p=0;
	

	printf("enter the input  file name1\n");
	scanf("%s",filename1);


	printf("enter the input  file name2\n");
	scanf("%s",filename2);

	fp1 =fopen(filename1,"r");
	fp2 =fopen(filename2,"r");

	printf("enter the output file name\n");
	scanf("%s",filename_out);

	fop =fopen(filename_out,"w");

	if(fp1==0||fp2==0)
	{
	printf("error in opening the file\n");
	return 0;	
	}

	fscanf(fp1,"%s \n%d %d \n%d\n",x, &m1, &n1, &pix1);
	fscanf(fp2,"%s \n%d %d \n%d\n",x, &m2, &n2, &pix2);
	int pix=0;
	fprintf(fop,"%s \n%d %d \n%d\n",x, m1, n2, pix);

	if(m1==m2 && n1==n2)
	{

	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
		fscanf(fp1,"%d",&matrix1[i][j]);
		fscanf(fp2,"%d",&matrix2[i][j]);
		p=(matrix1[i][j]+matrix2[i][j])/2;
		fprintf(fop,"%d ",p);
		if(p>pix)
		pix=p;		
		}
	fprintf(fop,"\n");		
	}
	}


	fclose(fop);
	fclose(fp1);
	fclose(fp2);
	




	return 0;
}
