////////////////////////////////////////////////////////
//Function Name:Pattern
//Input:4  4
/*Output:
 1 1 1 1 
 2 2 2 2 
 3 3 3 3 
 4 4 4 4 */
//Description:Display the Pattern
//Date: 28/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>

void Pattern(int rows,int cols)
{
	int i=0,j=0;

	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
}

int main()
{
	int irows=0,icols=0;

	printf("Enter Number of rows");
	scanf("%d",&irows);

	printf("Enter Number of Columns");
	scanf("%d",&icols);

	Pattern(irows,icols);

	return 0;
}