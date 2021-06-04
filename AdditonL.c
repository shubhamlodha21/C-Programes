////////////////////////////////////////////////////////
//Function Name:Addition 
//Input:5 5 
//Output:10
//Description:Addition of two Numbers Using for loop
//Date: 04/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
	int iNo1=0,iNo2=0,i=0;

	printf("Enter First Number\n");
	scanf("%d",&iNo1);

	printf("Enter Second Number\n");
	scanf("%d",&iNo2);

	for(i=1;i<=iNo2;i++)
	{
		iNo1++;
	}

	printf("Addition is %d",iNo1);
}