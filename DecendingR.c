////////////////////////////////////////////////////////
//Function Name:DisplayR
//Input:5 
//Output:5  4   3    2   1
//Description:Accept Number from user and Display in decending order by using Recursion. 
//Date: 04/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayI(int iNo)
{
    while(iNo > 0)
    {
        printf("%d\n",iNo);
        iNo--;
    }
}

void DisplayR(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\n",iNo);
        iNo--;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    DisplayR(iValue);
    
    printf("End of main\n");
    return 0;
}
