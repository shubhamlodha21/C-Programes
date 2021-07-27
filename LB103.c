//Function Name:Pattern
//Input:5
//Output:1 * 2 * 3 * 4 * 5 *
//Description:Display the Pattern
//Date: 27/07/2021
//Author: Shubham Lodha
/////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
	int i=0;

	for(i=1;i<=iNo;i++)
	{
		printf("%d\t*\t",i);
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