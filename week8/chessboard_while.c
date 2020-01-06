#include <stdio.h>
int main()
{int col,row=0;
int n;

printf("n?\n");
scanf("%d",&n);

while(row<n)
{	col=0;
	while(col<n)
	{ 	
		if(row%2==0){
		if(col%2==0)
		printf("0 ");
		else
		printf("X ");
		}
	else	
		{
		if(col%2!=0)
		printf("0 ");
		else
		printf("X ");	
		
		} 
	col++;
	}
printf("\n");
row++;
}


	return 0;
}
