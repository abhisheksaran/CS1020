#include <stdio.h>
int main()
{
int success,count,num = 0;
char names[200][30];
int marks[200];
FILE *p;
p = fopen("data01.txt", "r");
/* Open the file test.c in read-only mode and assign its handle to p */
if (p == 0)
/* Check if the file was opened correctly */
{
printf("Error in opening the file\n");
return(1);
}
while(count < 200)
{
success = fscanf(p, "%s %d", names[count], &marks[count] );

if(success == -1)
break;
count = count+1;
}
num=count;


fclose(p);
/* Close the file */

int sum=0;
count = count-1;
while(count >= 0)
{
sum=sum + marks[count];
count = count - 1;
}

printf("avg marks=%f\n",(float)sum/num);

int max=0;
for(int i=0;i<200;i++)
{
if(marks[i]>max)
max=marks[i];
}
printf("The maxm marks is %d\n",max);
 printf("The list of students with highest marks\n");

for(int i=0;i<200;i++)
{
if(marks[i]==max)
printf("%s\n",names[i]);
}



 return 0;
}
