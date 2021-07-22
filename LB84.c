////////////////////////////////////////////////////////
//Function Name:Display
//Input:18
//Output:1  3   5   7   9  11  13
//Description:Write a program which accepts N from user and print all odd numbers up to N.
//Date: 23/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i=i+2)
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