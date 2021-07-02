  
////////////////////////////////////////////////////////
//Function Name:SumNonFactors
//Input:12
//Output:50  
//Description: Write a program which accept number from user and display Sum of its Non-factors 
//Date: 03/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////





#include<stdio.h>

int SumNonFactors(int iNo)
{
	int i=0,iSum=0;

	for(i=2;i<iNo;i++)
		{
		if(iNo%i!=0)
		{
			iSum=iSum+i;
		}
	}
	return iSum;
}

int main()
{
	int iNo=0,iRet=0;

	printf("Enter Number");
	scanf("%d",&iNo);

	iRet=SumNonFactors(iNo);

	printf("Sum of all Non-factors is %d",iRet);

	return 0;
}