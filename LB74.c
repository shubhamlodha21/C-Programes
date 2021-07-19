////////////////////////////////////////////////////////
//Function Name:MultiDigit
//Input:2395
//Output:270
//Description:accept number from user and return multiplication of all digits 7.
//Date: 20/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

int MultiDigit(int iNo)
{
    int i=0,iMulti=1,iDigit=0;
    while(iNo>0)
    {
    	iDigit=iNo%10;
    	if(iDigit==0)
    	{

    	}
    	else
    	{
    		iMulti=iMulti*iDigit;
    	}
    	iNo=iNo/10;
    }

    return iMulti;
}

int main()
{
	int iNo=0,iRet=0;

	printf("Enter a Number");
	scanf("%d",&iNo);

	iRet=MultiDigit(iNo);

	printf("Multiplication of all Digits is %d",iRet);

	return 0;
}