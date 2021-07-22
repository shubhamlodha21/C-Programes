////////////////////////////////////////////////////////
//Function Name:MultipleDisplay
//Input:4
//Output:4  8  12  16   20
//Description:Write a program which accept N and print first 5 multiples of N.
//Date: 23/07/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////


#include<stdio.h>

void MultipleDisplay(int iNo)
{
	int i=0;
	for(i=iNo;i<=iNo*5;i=i+iNo)
	{
		printf("%d\t",i);
	}
}


int main()
{
	int iNo=0,iRet=0;

	printf("Enter a Number");
	scanf("%d",&iNo);

	MultipleDisplay(iNo);

	return 0;
}