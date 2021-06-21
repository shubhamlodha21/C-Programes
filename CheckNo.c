////////////////////////////////////////////////////////
//Function Name:CheckNo
//Input:-5
//Output: -5 is negative number
//Description:Check the Given number is positive or negative
//Date: 21/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n;
	printf("Enter any number");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is +ve no",n);
	}
	else{
		printf("%d is -ve no",n);
	}
	return 0;
}