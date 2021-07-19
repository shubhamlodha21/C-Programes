////////////////////////////////////////////////////////
//Function Name:DisplayDigit
//Input:123
//Output:3  2  1  
//Description:accept number from user and display its digits in reverse order
//Date: 19/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits(int iNo)
{
	int iDigits=0;

	while(iNo>0)
	{
		iDigits=iNo%10;
		printf("%d\n",iDigits);
		iNo=iNo/10;
	}

}

int main()
{
	int iNo=0;

	printf("Enter a Number");
	scanf("%d",&iNo);

	Digits(iNo);

	return 0;
}