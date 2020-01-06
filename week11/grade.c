#include<stdio.h>

float average(int p[],int i)
{	int sum=0;
	for(int j=0;j<i;j++)
 	{
	 sum=sum+p[j];
 	}
float ans=(float)sum/i;
return ans; 
}

char grade(int marks,float avg)
{	char ans;
	if(marks<avg/2)
	ans='F';
	else if(marks<avg)
	ans='C';
	else if(marks<2*avg)
	ans='B';
	else
	ans='A';
return ans;
	
}
int main()
{
FILE* fp;
FILE* fop;

int marks_math[100];
int marks_chem[100];
int marks_physics[100];
int marks_bio[100];
int count;
int name[100][20];
int success=0;
int i;
char c;

fp=fopen("data02.txt","r");
fop=fopen("grade02.txt","w");

if(fp==0)
printf("Error in opening the file!");

count=0;
while(1)
{
	success=fscanf(fp," %s %d, %d, %d, %d",name[count],&marks_physics[count],&marks_chem[count],&marks_math[count],&marks_bio[count]);
	
	if(success==-1)
	break;
	count++;
}
i=0;
while(i<count)
{
	fprintf(fop,"%s\t  %c\t , %c\t , %c\t , %c\t",name[i],grade(marks_physics[i],average(marks_physics,count)),grade(marks_chem[i],average(marks_chem,count)),grade(marks_math[i],average(marks_math,count)),grade(marks_bio[i],average(marks_bio,count)));
	fprintf(fop,"\n");
	i++;
}

fclose (fp);
fclose (fop);
return 0;

}
