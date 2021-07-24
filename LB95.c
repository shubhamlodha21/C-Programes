////////////////////////////////////////////////////////
//Function Name:RevserRange
//Input:23   30  
//Output:30 29 28 27 26 25 24 23 22 21 20
//Desription:accept range from user and display all numbers in between that range in reverse order
//Date: 24/07/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>


void ReverseRange(int iStart,int iEnd)
{
	int iSum=0;

	if((iStart>=iEnd)||(iStart<0)||(iEnd<0))
	{
		printf("InValid Option..!");
		exit(0);
	}

	for(int i=iEnd;i>=iStart;i--)
	{
		printf("%d\t",i);
	}

}


int main()
{
	int iStart=0,iEnd=0,iRet=0;

	printf("Enter Starting Point\n");
	scanf("%d",&iStart);

	printf("Enter Ending Point\n");
	scanf("%d",&iEnd);

	ReverseRange(iStart,iEnd);

	return 0;
}