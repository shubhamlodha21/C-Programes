////////////////////////////////////////////////////////
//Function Name:Display
//Input:21 3
//Output:21  21   21 
//Description:Accept two numbers from user and display first number in second number of times.
//Date:02/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo,int iTimes)
{
	int i=0;
	for(i=0;i<iTimes;i++)
	{
		printf("%d\t",iNo);
	}
}

int main()
{
	int iNo=0,iTimes=0;
	printf("Enter Number ");
	scanf("%d",&iNo);

	printf("Enter Number of times display");
	scanf("%d",&iTimes);

	Display(iNo,iTimes);
	return 0;
}