////////////////////////////////////////////////////////
//Function Name:RangeDisplay
//Input:23   35  
//Output:23 24 25 26 27 28 29 30 31 32 33 34 35 
//Description:accept range from user and display all numbers in between that range
//Date: 24/07/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>


int  RangeAdd(int iStart,int iEnd)
{
	int iSum=0;

	if((iStart>=iEnd)||(iStart<0)||(iEnd<0))
	{
		printf("InValid Option..!");
		exit(0);
	}

	for(int i=iStart;i<=iEnd;i++)
	{
		iSum=iSum+i;
	}

	return iSum;
}


int main()
{
	int iStart=0,iEnd=0,iRet=0;

	printf("Enter Starting Point\n");
	scanf("%d",&iStart);

	printf("Enter Ending Point\n");
	scanf("%d",&iEnd);

	iRet=RangeAdd(iStart,iEnd);
	printf("Addition of Range is %d",iRet);

	return 0;
}