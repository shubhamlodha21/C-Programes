///////////////////////////////////////////////////////
//Function Name:pattern
//Input:3
//Output:*   *   *
//Description:print the pattern
//Date: 18/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
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

