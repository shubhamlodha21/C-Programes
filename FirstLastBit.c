////////////////////////////////////////////////////////
//Function Name:ChkBits
//Input:2,147,483,649
//Output:First and Last Bit is On..!
//Description:Write a program which checks whether first and last bit is On or OFF
//Date: 22/08/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	int iMask=0x80000001;
	int iResult;

	iResult=iNo&iMask;

	if(iResult==iMask)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int main()
{
	UINT iValue=0;
	bool bRet;

	printf("Enter A number");
	scanf("%d",&iValue);

	bRet=ChkBit(iValue);

	if (bRet==1)
	{
		printf("First and Last Bit is On\n");
	}
	else
	{
		printf("First and Last Off\n");
	}
}