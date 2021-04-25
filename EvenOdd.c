////////////////////////////////////////////////////////
//Function Name:CheckEvenOdd
//Input:11
//Output:Given Number is Odd
//Description: Check Wether Given Number is Even or Odd Without using % Opeartor
//Date: 26/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(unsigned int iValue)
{
	unsigned int iResult;
	unsigned int iMask=0X00000001;
     iResult=iValue&iMask;

     if(iResult==iMask)
     {
         return false;
     }
     else
     {
     	return true;
     }
}

int main()
{
	unsigned int no;
	bool bRet;

	printf("Enter A Number");
	scanf("%d",&no);

	bRet=CheckEvenOdd(no);
	if(bRet==true)
	{
		printf("Given Number is Even\n");
	}
	else
	{
		printf("Given Number is Odd\n");
	}
	return 0;
}
