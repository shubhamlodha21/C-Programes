////////////////////////////////////////////////////////
//Function Name:Display
//Input:4
//Output:-4 -3 -2 -1 0 1 2 3 4
//Description:Write a program which accept number from user and print its numbers line. 
//Date: 23/07/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
	int i=0;
	for(i=-iNo;i<=iNo;i++)
	{
		printf("%d\t",i);
	}
}


int main()
{
	int iNo=0,iRet=0;

	printf("Enter a Number");
	scanf("%d",&iNo);

	Display(iNo);

	return 0;
}