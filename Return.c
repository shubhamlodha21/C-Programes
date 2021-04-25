///////////////////////////////////////////////////////
//Function Name:LeapYear
//Input:10 20
//Output:30 30
//Description: Function Should Always have a Single return type.
//Date: 26/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

int Sum_Diff(int ,int );

void main()
{
	int x=10,y=20;

	printf("Sum is %d\n",Sum_Diff(x,y));

	printf("Difference is %d\n",Sum_Diff(x,y));
} 

int Sum_Diff(int x,int y)
{
	int sum=x+y;
	int Diff=x-y;
	return Diff,sum;
}