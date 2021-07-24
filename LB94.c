////////////////////////////////////////////////////////
//Function Name:RangeAddEven
//Input:23   30  
//Output:108
//Description:accept range from user and return addition of all even numbers in between that range
//Date: 24/07/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int  RangeAddEven(int iStart,int iEnd)
{
	int iSum=0;

	if((iStart>=iEnd)||(iStart<0)||(iEnd<0))
	{
		printf("InValid Option..!");
		exit(0);
	}

	for(int i=iStart;i<=iEnd;i++)
	{
		if(i%2==0)
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

	iRet=RangeAddEven(iStart,iEnd);
	printf("Addition of Even Range is %d",iRet);

	return 0;
}