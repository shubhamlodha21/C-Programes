////////////////////////////////////////////////////////
//Function Name:SumDiffer
//Input:2395
//Output:-15
//Description:accept number from user and return difference between summation of even digits and summation of odd digits. 
//Date: 20/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////




#include<stdio.h>

int SumDiffer(int iNo)
{
    int i=0,iSum1=0,iSum2=0,iDigit=0;
    while(iNo>0)
    {
    	iDigit=iNo%10;
    	if(iDigit%2==0)
    	{
    		iSum1=iSum1+iDigit;
    	}
    	else
    	{
    		iSum2=iSum2+iDigit;
    	}
    	iNo=iNo/10;
    }

    return iSum1-iSum2;
}

int main()
{
	int iNo=0,iRet=0;

	printf("Enter a Number");
	scanf("%d",&iNo);

	iRet=SumDiffer(iNo);

	printf("Difference Between Even and odd Digit sum is %d",iRet);

	return 0;
}