  
////////////////////////////////////////////////////////
//Function Name:MultiFactor
//Input:12
//Output: 144
//Description: Write a program which accept number from user and display its multiplication of factors.
//Date: 03/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////





#include<stdio.h>

int MultiFactor(int iNo)
{
	int i=0,iMulti=1;

	for(i=1;i<iNo;i++)
	{
		if(iNo%i==0)
		{
			iMulti=iMulti*i;
		}
	}
	return iMulti;
}

int main()
{
	int iNo=0,iRet=0;

	printf("Enter Number");
	scanf("%d",&iNo);

	iRet=MultiFactor(iNo);

	printf("Multiplication of Factors is %d",iRet);

	return 0;
}