//////////////////////////////////////////////////////
//Function Name:pattern
//Input:5
//Output: *   5   *   4   *   3   *   2   *   1
//Description:print the pattern
//Date: 19/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("*\t%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    unsigned int iValue = 0;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    Pattern(iValue);
    return 0;
}

