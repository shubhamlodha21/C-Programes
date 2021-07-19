////////////////////////////////////////////////////////
//Function Name:CountRange
//Input:4521
//Output:2
//Description:accept number from user and return the count of digits in between 3 and 7.
//Date: 20/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
	int iDigit=0,iCnt=0;

	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit>=3)&&(iDigit<=7))
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

	iRet=CountRange(iNo);
	printf("Count of Digits on Between 3 and 7 are %d",iRet);

	return 0;
}