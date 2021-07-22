////////////////////////////////////////////////////////
//Function Name:Display
//Input:4
//Output:1 2 3 4
//Description:accept number from user and print numbers till that number
//Date: 23/07/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i++)
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