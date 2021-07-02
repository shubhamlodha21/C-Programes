////////////////////////////////////////////////////////
//Function Name:Chk
//Input:22
//Output:Even 
//Description:Accept number from user and check whether number is even or odd. 
//Date: 02/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0


bool Chk(int iNo)
{
	if(iNo%2==0)
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
	int iNo=0;
	bool bRet=0;

	printf("Enter Number");
	scanf("%d",&iNo);

	bRet=Chk(iNo);
	if(bRet==1)
	{
		printf("%d is Even",iNo);
	}
	else
	{
		printf("%d is Odd",iNo);
	}
}