////////////////////////////////////////////////////////
//Function Name:Display
//Input:21
//Output:Demo
//Description:Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo” 
//Date:02/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>

int Display(int iNo)
{
	if(iNo<=9)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
	}
}

int main()
{
	int iNo=0;
	printf("Enter Number ");
	scanf("%d",&iNo);

	Display(iNo);
	return 0;
}