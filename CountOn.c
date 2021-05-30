////////////////////////////////////////////////////////
//Function Name:CountOn
//Input:10
//Output:2 
//Description:Count the number of On bits in Code
//Date: 30/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

int CountOne(unsigned int iNo)
{
    int iCnt = 0;
    while(iNo > 0)
    {
        iCnt = iCnt + (iNo % 2);
        iNo = iNo / 2;
    }
    return iCnt;
}

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = CountOne(iValue);
    
    printf("Number of on bits are : %d\n",iRet);
    return 0;
}






















