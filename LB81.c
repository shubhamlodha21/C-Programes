////////////////////////////////////////////////////////
//Function Name:Pattern
//Input:4
//Output:$ * $ * $ * $ *
//Description:accept number from user and print that number of $ & * on screen.
//Date: 23/07/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
	int i=0;
	for(i=0;i<iNo;i++)
	{
		printf("$\t*\t");
	}
}


int main()
{
	int iNo=0,iRet=0;

	printf("Enter a Number");
	scanf("%d",&iNo);

	Pattern(iNo);

	return 0;
}