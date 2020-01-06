#include<stdio.h>
#include<math.h>

int main()
{
	
	int n,i,highest,lowest,score,failure,sum,square_sum;
	float standerd_deviation;
	printf("Please! enter the number of students:");
	scanf("%d",&n);
	
	i=1;
	highest=0;
	lowest=0;
	failure=0,
	sum=0;
	square_sum=0;

	while(i<=n)
	{	
	printf("please enter the score:");
	scanf(" %d",&score);

	if(score>highest)
		highest=score;
	if(score<lowest)
		lowest=score;
	if(i==1)
		highest=lowest=score;
	if(score<40)
		++failure;

	sum+=score;
	square_sum+=(score*score);

	++i;
	}

	standerd_deviation=((float)square_sum/n)-pow(((float)sum/n),2);

	printf("Highest score is: %d\n",highest);
	printf("Lowest score is: %d\n",lowest);
	printf("The number of failures is: %d\n",failure);
	printf("The average of scores is %f\n",(float)sum/n);
	printf("The standerd deviation is %f\n",sqrt(standerd_deviation));
	return 0;
}
