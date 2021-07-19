////////////////////////////////////////////////////////
//Function Name:CountNo
//Input:12438498
//Output:Count of digits less than 6 is 5
//Description:accept number from user and count frequency of such a digits which are less than 6.
//Date: 19/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountNo(int iNo)
{
	int iDigits=0,iCnt=0;

	while(iNo>0)
	{
		iDigits=iNo%10;
		if((iDigits>=1)&&(iDigits<=6))
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
	printf("Count of number less than 6 is %d",iRet);

	return 0;
}