  
////////////////////////////////////////////////////////
//Function Name:Factors
//Input:12
//Output:-34 
//Description: Write a program which accept number from user and return difference between summation of all its factors and non factors.
//Date: 03/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

int SumDiffFactors(int iNo)
{
	int i=0,iSum=0,iSum1=0;

	for(i=1;i<iNo;i++)
		{
		if(iNo%i!=0)
		{
			iSum=iSum+i;
		}
		else
		{
			iSum1=iSum1+i;
		}
	}
	return iSum1-iSum;
}

int main()
{
	int iNo=0,iRet=0;

	printf("Enter Number");
	scanf("%d",&iNo);

	iRet=SumDiffFactors(iNo);

	printf("Sum difference  is %d",iRet);

	return 0;
}