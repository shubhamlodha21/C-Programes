  
////////////////////////////////////////////////////////
//Function Name:Factors
//Input:12
//Output:6  4  3  2  1  
//Description: Write a program which accept number from user and display its factors in decending order
//Date: 03/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

void Factors(int iNo)
{
	int i=0;

	for(i=iNo-1;i>0;i--)
		{
		if(iNo%i==0)
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	int iNo=0,iRet=0;

	printf("Enter Number");
	scanf("%d",&iNo);

	Factors(iNo);

	return 0;
}