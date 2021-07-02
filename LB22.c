////////////////////////////////////////////////////////
//Function Name:Display
//Input:2
//Output: *  *
//Description:Accept one number from user and print that number of * on screen using while loop
//Date: 02/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
	while(iNo>0)
	{
		printf("*\t");
		iNo--;
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