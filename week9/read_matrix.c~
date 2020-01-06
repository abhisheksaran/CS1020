#include <stdio.h>
int main()
{
FILE *fp;
FILE *fop;
char filename[100];
char filename_out[100];
char name[20];
int marks[20];
int m, n, i, j;

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

printf("Enter the output file name: ");
scanf("%s", filename);
fop=fopen(filename_out,"w")

for(int i=0;i<20;i++)
{
fscanf(fp, "%s", &name[i]);
fscanf(fp, "%d", &marks[i]);
}

for(i = 0; i < 20; i++)

{
fprintf(fop, "%s ", name[i]);
fprintf(fop, "%d\n", marks[i]);

}




fclose(fp); /* Close the file */
fclose(fop);
return(0);
}
