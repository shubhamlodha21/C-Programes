////////////////////////////////////////////////////////
//Function Name:Pattern
//Input:4
//Output:
/*
1 1 1 1
3     3
5     5
7 7 7 7
 */
//Description:Prints the Pattern
//Date: 02/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRows)
{
   int i=0,j=0,iNo=1;
   for(i=1;i<=iRows;i++)
   {
   	for(j=1;j<=iRows;j++)
   	{
   		if((i==1)||(j==1)||(i==iRows)||(j==iRows))
   		{
   		printf("%d\t",iNo);
   	    }
   	    else
   	    {
   	    	printf("\t");
   	    }
   	}
   	printf("\n");
   	iNo=iNo+2;
   }
}

int main()
{
	int iRows=0;

	printf("Enter Number of rows");
	scanf("%d",&iRows);

	Pattern(iRows);

	return 0;
}