////////////////////////////////////////////////////////
//Function Name:CountFour
//Input:12434
//Output:Count of 4 in number is 2
//Description:accept number from user and count frequency of 4 in it. 
//Date: 19/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////




#include<stdio.h>
#include<stdlib.h>

int CountFour(int iNo)
{
	int iDigits=0,iCnt=0;

	while(iNo>0)
	{
		iDigits=iNo%10;
		if(iDigits==4)
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

	iRet=CountFour(iNo);
	printf("Count of 4 in number is %d",iRet);

	return 0;
}