////////////////////////////////////////////////////////
//Function Name:Display
//Input:2
//Output: *  *
//Description:Accept one number from user and print that number of * on screen using for loop
//Date: 02/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\t");
	}
}

int main()
{
	int iNo=0;
	printf("Enter Number of times Display");
	scanf("%d",&iNo);

	Display(iNo);
	return 0;
}