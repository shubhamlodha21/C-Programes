  
////////////////////////////////////////////////////////
//Function Name:NonFactors
//Input:12
//Output:5   7   8   9  10   11
//Description: Write a program which accept number from user and display its Non-factors 
//Date: 03/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

void NonFactors(int iNo)
{
	int i=0;

	for(i=2;i<iNo;i++)
		{
		if(iNo%i!=0)
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	int iNo=0,iRet=0;

	printf("Enter Number");
	scanf("%d",&iNo);

	NonFactors(iNo);

	return 0;
}