#include<stdio.h>
int main()

{	int i=0;
	int j;
	int success;
	int number_of_s_grade;

	char roll[10];
	char no[10];
	char name[10];
	char physics[10];
	char chemistry[10];
	char maths[10];

	int roll_no[100];
	char name1 [100][20];
	char name2 [100][20];
	int marks_maths[100];
	int marks_physics[100];
	int marks_chemistry[100];

	char subject[4];

	
	FILE* fp;
	fp=fopen("data3A.txt","r");
	
	if(fp==0)
	printf("Error in opening tyhe file!\n");

	else
	{
	fscanf(fp,"%s",roll);
	fscanf(fp,"%s",no);
	fscanf(fp,"%s",name);	
	fscanf(fp,"%s",physics);
	fscanf(fp,"%s",chemistry);
	fscanf(fp,"%s",maths);

	
	do
	{
	success=fscanf(fp,"%d %s %s %d %d %d",&roll_no[i],name1[i],name2[i],&marks_physics[i],&marks_chemistry[i],&marks_maths[i]);
	i++;	
	}
	while(success!=-1);

	}

	printf("enter the subject:\n");
	scanf("%s",subject);

	if(subject[0]=='M'&&subject[1]=='a'&&subject[2]=='t')
	{
		for(j=0;j<i;j++)
		{
		printf("%d %s %s %d\n",roll_no[j],name1[j],name2[j],marks_maths[j]);
		}
		
		number_of_s_grade=0;
		for(j=0;j<i;j++)
		{
		if(marks_maths[j]>=91)
		number_of_s_grade++;
		}	
	}
	else if(subject[0]=='C'&&subject[1]=='h'&&subject[2]=='e')
	{
		for(j=0;j<i;j++)
		{
		printf("%d %s %s %d\n",roll_no[j],name1[j],name2[j],marks_chemistry[j]);
		}
		
		number_of_s_grade=0;
		for(j=0;j<i;j++)
		{
		if(marks_chemistry[j]>=91)
		number_of_s_grade++;
		}	
	}
	else if(subject[0]=='P'&&subject[1]=='h'&&subject[2]=='y'&&subject[3]=='s')
	{
		for(j=0;j<i;j++)
		{
		printf("%d %s %s %d\n",roll_no[j],name1[j],name2[j],marks_physics[j]);
		}
		
		number_of_s_grade=0;
		for(j=0;j<i;j++)
		{
		if(marks_physics[j]>=91)
		number_of_s_grade++;
		}	
	}

	else
	printf("please enter a valid subject!!\n");

	printf("the number of s grade student in  subject %s =%d\n",subject,number_of_s_grade);
	
	fclose(fp);
	return 0;
}
