////////////////////////////////////////////////////////
//Function Name:MultiNo
//Input : 4
// Output : 216
//Description:Accept Number from User and Multiply number n times.
//Date: 02/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Power(int iNo)
{
	int i=0,iPower=1;
	for(i=0;i<iNo;i++)
	{
		iPower=iPower*iNo;
	}
	return iPower;
}

int main()
{
	int iNo=0,iRet=0;

	printf("Enter Number\n");
	scanf("%d",&iNo);

	iRet=Power(iNo);
	printf("Power of Given Number is %d",iRet);
}