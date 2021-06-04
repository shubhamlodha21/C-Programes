////////////////////////////////////////////////////////
//Function Name:Addition 
//Input:5 5 
//Output:10
//Description:Addition of two Numbers without using + Operator 
//Date: 04/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
	int iNo1,iNo2,iAns;

	printf("Enter First Number\n");
	scanf("%d",&iNo1);

	printf("Enter Second Number\n");
	scanf("%d",&iNo2);

	iAns=iNo1-(-iNo2);

	printf("Addition is %d",iAns);
}