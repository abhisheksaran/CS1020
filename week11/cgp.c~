#include<stdio.h>

float cgp(char a,char b, char c, char d)
{
char grade[4];
grade[0]=a;
grade[1]=b;
grade[2]=c;
grade[3]=d;
int marks;
int sum=0;
for(int i=0;i<4;i++){
	marks=0;
	switch(grade[i])
	{
	case'A':
		marks=10;
		break;
	case'B':
		marks=8;
		break;
	case'C':
		marks=6;
		break;
	case'F':
		marks=0;
		break;	
	}
sum=sum+marks;
}

return (float)sum/4;
}

int main()
{
	FILE* fp;
	FILE* fop;
	int i,count,success=0;
	int name[100][20];
	char grade1[100], grade2[100], grade3[100],grade4[100];
	float c;
	fp=fopen("grade02.txt","r");
	fop=fopen("cgpa02.txt","w");

	while(1)
	{
	success=fscanf(fp,"%s %c , %c , %c , %c",name[count],&grade1[count],&grade2[count],&grade3[count],&grade4[count]);
	if(success==-1)
	break;
	count++;
	}

	printf("%d",count);
	fprintf(fop,"name of student\tcgp\t\n");
	i=0;
	
	while(i<count)
	{
	c=cgp(grade1[i],grade2[i],grade3[i],grade4[i]);
	fprintf(fop,"%s\t%f\t\n",name[i],c);
	i++;
	}

fclose(fp);
fclose(fop);

	 return 0;

}
