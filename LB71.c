////////////////////////////////////////////////////////
//Function Name:CountEven
//Input:8416
//Output:3
//Description:accept number from user and return the count of even digits
//Date: 20/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>

int CountEven(int iNo)
{
	int iDigit=0,iCnt=0;

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int iNo=0,iRet=0;

	printf("Enter a Number");
	scanf("%d",&iNo);

	iRet=CountEven(iNo);
	printf("Count of Even Digits is %d",iRet);

	return 0;
}