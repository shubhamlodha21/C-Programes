////////////////////////////////////////////////////////
//Function Name:RangeDisplayEven
//Input:23   35  
//Output:24 26 28 30 32 34
//Description:accept range from user and display all even numbers in between that range.
//Date: 24/07/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>


void RangeDisplayEven(int iStart,int iEnd)
{
	if(iStart>=iEnd)
	{
		printf("InValid Option..!");
	}

	for(int i=iStart;i<=iEnd;i=i+2)
	{
		printf("%d\t",i);
	}
}


int main()
{
	int iStart=0,iEnd=0;

	printf("Enter Starting Point\n");
	scanf("%d",&iStart);

	printf("Enter Ending Point\n");
	scanf("%d",&iEnd);

	RangeDisplayEven(iStart,iEnd);

	return 0;
}