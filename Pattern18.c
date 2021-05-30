////////////////////////////////////////////////////////
//Function Name:Pattern18
//Input:5
//Output:
/*1
2       2
3       3       3
4       4       4       4
5       5       5       5       5*/
//Description:Prints the Pattern
//Date: 30/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int irows)
{
	int i=0,j=0,space=0;

	for(i=1;i<=irows;i++)
	{
		for(space=1;space<=(irows-i);space++)
		 {
		 	printf("  ");
		 }
	     for(j=1;j<=i;j++)
		{
		printf("*\t",j);
	    }
	printf("\n");
	}
}


int main()
{
	int i=0,j=0;

	printf("Enter number of rows\n");
	scanf("%d",&i);

	Pattern(i);

	return 0;
}
