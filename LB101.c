////////////////////////////////////////////////////////
//Function Name:Pattern
//Input:5
//Output:A       B       C       D       E
//Description:Print the Pattern
//Date: 05/09/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
	int i=0;
	char ch='A';

	for(i=1;i<=iNo;i++)
	{
		printf("%c\t",ch);
		ch++;
	}

}

int main()
{
	int iNo=0,iRet=0;

	printf("Enter a Number");
	scanf("%d",&iNo);

	Pattern(iNo);

	return 0;
}