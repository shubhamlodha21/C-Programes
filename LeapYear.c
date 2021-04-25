////////////////////////////////////////////////////////
//Function Name:LeapYear
//Input:2024
//Output:2024 is Leap Year
//Description: Check Wether Given Year is Leap Year or Not
//Date: 26/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>
#include<stdbool.h>

bool LeapYear(int iValue)
{
	if(iValue%4==0)
	{
		return true;
	}
	else
	{
		return false;
	}
} 

int main()
{
	int iNo;
	bool bRet;

	printf("Enter a Year");	
	scanf("%d",&iNo);

    bRet=LeapYear(iNo);
    if(bRet==true)
    {
    	printf("%d year is a LeapYear",iNo);
    }
    else
    {
    	printf("%d year is not a LeapYear",iNo);
    }
  return 0;
}