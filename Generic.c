////////////////////////////////////////////////////////
//Function Name:Generic
//Input:992
//Output:2
//Description:To find Generic Root of Number
//Date: 31/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Generic(int iNo)
{

	int iSum=iNo;
	while(iSum>9)
	{
		iNo=iSum;
		iSum=0;
		while(iNo!=0)
		{
			iSum=iSum+(iNo%10);
			iNo=iNo/10;
		}
	}
    return iSum;
}


int main()
{
	int iNo=0,iRet=0;

	printf("Enter a Number\n");
	scanf("%d",&iNo);

	iRet=Generic(iNo);
    
    printf("Generic Root is %d",iRet);
}