////////////////////////////////////////////////////////
//Function Name:ChkZero
//Input:1230
//Output:It contains zero
//Description:accept number from user and check whether it contains 0  in it or not.
//Date: 19/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int ChkZero(int iNo)
{
	int iDigits=0;

	while(iNo>0)
	{
		iDigits=iNo%10;
		if(iDigits==0)
		{
			printf("It contains Zero");
			return 0;
		}
		iNo=iNo/10;
	}
	printf("It Doesn't Contains Zero");

}

int main()
{
	int iNo=0;

	printf("Enter a Number");
	scanf("%d",&iNo);

	Digits(iNo);

	return 0;
}