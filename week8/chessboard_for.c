#include <stdio.h>
int main()
{int n;

printf("n?\n");
scanf("%d",&n);

for(int row=0;row<n;row++)
{	
	for(int col=0;col<n;col++)
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
	
	}
printf("\n");

}


	return 0;
}
